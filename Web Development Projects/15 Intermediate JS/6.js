/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Playing with arrays
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

var guestList = [ "Ishaan", "Anil Kapoor", "Tisca Chopra",, "Ashish Vidyarthi", "Neil Bhoopalam", "Sapna Pabbi" ]; 
console.log(guestList); // Output - Whole list
console.log(guestList.length); // Output - 6
guestList[0]; // Output - Ishaan


//Checks if your name is there or not
var guestName = prompt ("What is your name?");
guestList.includes(guestName);

/* 
For Terminal Code... Ctrl + Shift + `
*/