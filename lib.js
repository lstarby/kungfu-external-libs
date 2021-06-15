const axios = require("axios");
const fs = require("fs");
const path = require("path");
const http = require("http");
const { spawn, spawnSync } = require("child_process");

const spawnOptsInherit = { shell: true, stdio: "inherit", windowsHide: true };
const spawnOptsPipe = { shell: true, stdio: "pipe", windowsHide: true };

const libSiteURL = "http://ex.libkungfu.cc";

exports.getExLibs = async function (matchName, matchVersion, listVersion = true, listPlatform = false) {
    const getLibOsImpl = function (targetLibVersion, sourceLibVersion) {
        for (const osName in sourceLibVersion) {
            targetLibVersion[osName] = {};
        }
    };
    const getLibVersions = function (targetLib, sourceLib) {
        for (const libVersion in sourceLib) {
            if (!libVersion.match(matchVersion)) continue;
            targetLib[libVersion] = {};
            if (listPlatform) {
                getLibOsImpl(targetLib[libVersion], sourceLib[libVersion]);
            }
        }
    };
    const response = await axios.get(`${libSiteURL}/index.json`);
    const sourceLibs = response.data;
    const targetLibs = {};
    for (const libName in sourceLibs) {
        if (!libName.match(matchName)) continue;
        targetLibs[libName] = {};
        if (listVersion) {
            getLibVersions(targetLibs[libName], sourceLibs[libName]);
        }
    }
    return targetLibs;
};