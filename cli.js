const { getExLibs, downloadLib } = require("./lib.js");
const treeify = require('treeify');

require("yargs/yargs")(process.argv.slice(2))
    .command("list", "List libs", (yargs) => {
        yargs.option("match-name", {
            type: "string",
            default: ".*",
            describe: "re expression to filter lib name"
        }).option("match-version", {
            type: "string",
            default: ".*",
            describe: "re expression to filter lib version"
        }).option("list-version", {
            type: "boolean",
            default: true,
            describe: "show lib versions"
        }).option("list-platform", {
            type: "boolean",
            default: false,
            describe: "show platform implementaions"
        });
    }, (argv) => {
        async function printLibs() {
            const libs = await getExLibs(argv.matchName, argv.matchVersion, argv.listVersion, argv.listPlatform);
            console.log(treeify.asTree(libs, true));
        }
        printLibs();
    })
    .command("download", "Download lib", (yargs) => {
        yargs.option("lib-name", {
            type: "string",
            describe: "re expression to filter lib name"
        }).option("lib-version", {
            type: "string",
            describe: "re expression to filter lib version"
        }).demandOption(["lib-name", "lib-version"]);
    }, (argv) => {
        async function download() {
            await downloadLib(argv.libName, argv.libVersion);
        }
        download();
    })
    .demandCommand()
    .help()
    .argv;