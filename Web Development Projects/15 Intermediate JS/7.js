/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Operating entry & exit using arrays
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

var guestList = [ "Ishaan", "Anil Kapoor", "Tisca Chopra",, "Ashish Vidyarthi", "Neil Bhoopalam", "Sapna Pabbi" ]; 

//Checks if your name is there or not
var guestName = prompt ("What is your name?");

if (guestList.includes(guestName)){
    alert("Welcome!");
} else {
    alert("Sorry, maybe next time.");
}

/* 
For Terminal Code... Ctrl + Shift + `
*/