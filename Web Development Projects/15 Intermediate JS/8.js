/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: To create a program called FizzBuzz
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

/*

WAP that prints the numbers from 1-100. But for multiples of 3, print "Fizz" instead of the number & for the multiples of 5, print "Buzz". For numbers which are multiples of both 3 & 5, print "FizzBuzz".

*/

var output = [];
var c = 1; //count

//Creating function to push new numbers
function fizzBuzz() {
    output.push(c);
    c++; // c = c + 1
    console.log(output);
}

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
    output.push(count);
}

/* 
For Terminal Code... Ctrl + Shift + `
*/