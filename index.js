const { list } = require("./lib.js");

require("yargs/yargs")(process.argv.slice(2))
    .command("list", "List libs", (yargs) => {
    }, (argv) => {
        console.log(fs.realpathSync(path.dirname(__dirname)));
    })
    .demandCommand()
    .help()
    .argv;