/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Leap Year Calculator
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

/*

Leap year is a year:

1. that is evenly divisible by 4.
2. except year that is evenly divisible by 100              Eg- year 2100 is not an leap year
3. unless the year is also evenly divisible by 400.         Eg- year 2400 is a leap year
*/

function isLeap(year) {
    if (year % 4 === 0) {
        if (year % 100 === 0) {
            if (year % 400 === 0) {

                return "Leap year"

            } else { return "Not leap year." }
        } else { return " Leap year. " }
    } else { return "Not leap year." }
}

/* 
For Terminal Code... Ctrl + Shift + `
*/