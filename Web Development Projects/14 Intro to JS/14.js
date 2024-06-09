/*
> Date Created: June 1, 2024
> Author: Ishaan Rastogi
> Purpose: To make a BMI calculator.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

var weight = prompt("What is your weight in kg?");
var height = prompt("What is your height in m?");

function bmiCalculator (weight, height) {
    var bmi = weight / Math.pow(height, 2);
    return Math.round(bmi);
}

var bmi = bmiCalculator (weight, height); // Weight in kg & height in meters
console.log(bmi);

/*
For Terminal Code... Ctrl + Shift + `
*/