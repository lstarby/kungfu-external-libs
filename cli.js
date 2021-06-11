const { publish, build } = require("./lib.js");

require("yargs/yargs")(process.argv.slice(2))
    .command("build", "Build libs", (yargs) => {
    }, (argv) => {
        build();
    })
    .command("list", "List libs", (yargs) => {
    }, (argv) => {
        console.log(fs.realpathSync(path.dirname(__dirname)));
    })
    .demandCommand()
    .help()
    .argv;