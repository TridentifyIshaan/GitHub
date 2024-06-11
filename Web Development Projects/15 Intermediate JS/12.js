/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Better version of 10.js using for loop
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

/*

While is used when you need to state & for when you need to iterate the function upto a certain number.

*/

var output = [];

//Creating function to push new numbers
function fizzBuzz() {
    for (var c = 1; c < 101; c++) {
        if ( c % 3 === 0) {
            output.push("Fizz");
        }
        else if ( c % 5 === 0) {
            output.push("Buzz");
        }
        else if ( c % 3 === 0 && c % 5 === 0) {
            output.push("FizzBuzz");
        }
        else {
            output.push(c);
        }
    }
    console.log(output);
}

/* 
For Terminal Code... Ctrl + Shift + `
*/