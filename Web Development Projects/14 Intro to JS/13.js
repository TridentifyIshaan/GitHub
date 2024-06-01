/*
> Date Created: June 1, 2024
> Author: Ishaan Rastogi
> Purpose: To calculate life according the age.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

function lifeInWeeks(age) {
    var yearsRemaining = 90 - age;
    var days = yearsRemaining * 365
    var weeks = yearsRemaining * 52;
    var months = yearsRemaining * 12;

    console.log("You have " + days + " days, " + weeks + " weeks and " + months + "months left.");
}

lifeInWeeks(12); // Caculating life according to the age 12.

/*
For Terminal Code... Ctrl + Shift + `
*/