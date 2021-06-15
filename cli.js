const { getExLibs } = require("./lib.js");
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
    .demandCommand()
    .help()
    .argv;