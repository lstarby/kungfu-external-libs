const fs = require("fs");
const path = require("path");
const glob = require("glob");

const exlibs = {};

const exlibsDir = path.join(__dirname, "libs");

const findArchImplementaion = function (basePath, platformMap, platformName, archName) {
    const archPath = path.join(basePath, archName);
    if (fs.existsSync(archPath)) {
        platformMap[archName] = glob.sync(path.join(archPath, "*")).map(file => path.basename(file));
    }
};

const findPlatformImplementation = function (basePath, libMap, platformName) {
    const platformMap = {};
    const platformDir = path.join(basePath, platformName);
    if (fs.existsSync(platformDir)) {
        findArchImplementaion(platformDir, platformMap, platformName, "x86");
        findArchImplementaion(platformDir, platformMap, platformName, "x64");
        libMap[platformName] = platformMap;
    }
};

const collectLibFiles = function (basePath, libVersionMap) {
    const libMap = {};
    const libDir = path.join(basePath, "lib");
    findPlatformImplementation(libDir, libMap, "macos");
    findPlatformImplementation(libDir, libMap, "linux");
    findPlatformImplementation(libDir, libMap, "windows");
    libVersionMap["lib"] = libMap;
};

const collectIncludeFiles = function (basePath, libVersionMap, dirName) {
    const dirPath = path.join(basePath, dirName);
    libVersionMap[dirName] = glob.sync(path.join(dirPath, "**"))
        .filter(file => fs.lstatSync(file).isFile())
        .map(file => file.substring(dirPath.length + 1));
};

glob.sync(path.join(exlibsDir, "*")).forEach(libPath => {
    exlibs[path.basename(libPath)] = {};
    glob.sync(path.join(libPath, "*")).forEach(versionPath => {
        const libName = path.basename(path.dirname(versionPath));
        const libVersion = path.basename(versionPath);
        const vMap = {};
        collectIncludeFiles(versionPath, vMap, "doc");
        collectIncludeFiles(versionPath, vMap, "include");
        collectLibFiles(versionPath, vMap);
        exlibs[libName][libVersion] = vMap;
    });
});

fs.writeFileSync(path.join(exlibsDir, "index.json"), JSON.stringify(exlibs, null, 2));