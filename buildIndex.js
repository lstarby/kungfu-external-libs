const fs = require("fs");
const path = require("path");
const glob = require("glob");

let exlibs = {};

let exlibsDir = path.join(__dirname, "libs");

let buildArchImplMap = function (basePath, osImplMap, archName) {
    let archPath = path.join(basePath, archName);
    if (fs.existsSync(archPath)) {
        let headers = [];
        let bins = [];
        glob.sync(path.join(archPath, "include", "*")).forEach(headerPath => {
            headers.push(path.basename(headerPath));
        });
        glob.sync(path.join(archPath, "lib", "*")).forEach(binPath => {
            bins.push(path.basename(binPath));
        });
        osImplMap[archName] = {
            "include": headers,
            "lib": bins
        };
    }
};

let buildOSImplMap = function (basePath, libMap, osName) {
    if (fs.existsSync(path.join(basePath, osName))) {
        let osImplMap = {};
        buildArchImplMap(path.join(basePath, osName), osImplMap, "x86");
        buildArchImplMap(path.join(basePath, osName), osImplMap, "x64");
        libMap[osName] = osImplMap;
    }
};

glob.sync(path.join(exlibsDir, "*")).forEach(libPath => {
    exlibs[path.basename(libPath)] = {};
    glob.sync(path.join(libPath, "*")).forEach(versionPath => {
        let libName = path.basename(path.dirname(versionPath));
        let libVersion = path.basename(versionPath);
        let libMap = {};
        buildOSImplMap(versionPath, libMap, "macos");
        buildOSImplMap(versionPath, libMap, "linux");
        buildOSImplMap(versionPath, libMap, "windows");
        exlibs[libName][libVersion] = libMap;
    });
});

fs.writeFileSync(path.join(exlibsDir, "index.json"), JSON.stringify(exlibs, null, 2));