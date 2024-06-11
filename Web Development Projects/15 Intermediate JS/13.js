/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Fibonacci Numbers Generator
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

/*

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 ....

Series of last 2 addends, Eg - 5 + 8 = 13 

Generate with an output of n = 5.

*/

function fibonnaciGenerator(n) {
    var output = [];

    if ( n === 1) {
        output = [0];
    }
    else if ( n === 2 ) {
        output = [0,1];
    }
    else {
        output = [0,1];
        for ( var i = 2; i < n; i++ ){
            output.push(output[output.length-2] + output[output.length-1]); //pushing back to the output
        }
    }

    return output;
}

output = fibonnaciGenerator(5);
console.log(output);

/* 
For Terminal Code... Ctrl + Shift + `
*/