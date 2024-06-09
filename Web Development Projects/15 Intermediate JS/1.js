/*

This note will be available only on the first file of this folder .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in JS Language.
Author has made these programmes as a reference using courses of AppBrewery London taught by Dr. Angela Yu, while himself learning JS Language for the first time.

/*
> Date Created: June 09, 2024
> Author: Ishaan Rastogi
> Purpose: Random Number generator
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

//Any random decimal number generation within a range
var n = Math.random();
n = n * 6; // Range 0 to 5.99....
console.log(n);

//Any random integer number generation within a range
var m = Math.random();
m = m * 6; // Range 0 to 5
m = Math.floor(m);
console.log(m);

//Increasing endvalue from 5 to 6
var o = Math.random();
o = o * 6; // Range 0 to 6
o = Math.floor(o) + 1;
console.log(o);


/* 
For Terminal Code... Ctrl + Shift + `
*/