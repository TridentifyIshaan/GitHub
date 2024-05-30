/*

This note will be available only on the first file of this folder .
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in JS Language.
Author has made these programmes as a reference using courses of AppBrewery London taught by Dr. Angela Yu, while himself learning JS Language for the first time.

/*
> Date Created: May 30, 2024
> Author: Ishaan Rastogi
> Purpose: Switching value of 2 integers w/o changing any exisiting code, or typing any numbers, or reclaring the variables 'a & b'
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

//creating a function
function text() {
    var a = "8"; //defining variables for the first time
    var b = "3";

    // Main code to switch

    var c = a;
    a = b;
    b = c;

    // Console

    console.log("a is " + a);
    console.log("b is " + b);

}

/* 
For Terminal Code... Ctrl + Shift + `
*/