let disp=require("./display");
let add_line=require("./add_line");
let add=require("./add_non_empty");
let input=process.argv.slice(2);
let inp=input[0];
switch(inp){
    case "-s":
        break;
    case "-n":
        add_line.add_line(input[1]);
        break;
    case "-b":
        add.add_line(input[1]);
        break;
    default:
           // console.log("displaying the contents of the file if the file is present");
            disp.display(input);
        
        break;
}