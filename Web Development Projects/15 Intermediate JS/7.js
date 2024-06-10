/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Operating entry & exit using arrays
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

var guestList = ["Anil Kapoor", "Tisca Chopra",, "Ashish Vidyarthi", "Neil Bhoopalam", "Sapna Pabbi", "Ishaan" ]; 

//Checks if your name is there or not
var guestName = prompt ("What is your name?");

if (guestList.includes(guestName)){
    alert("Welcome!");
} else {
    alert("Sorry, maybe next time.");
}

// Kicking Ishaan out of the guestList because he is not in the caste of 24.
guestList.pop; // Pops out the last index of array.

//But little did they know that Ishaan is the host for the interview. So, we have to add Ishaan back.
guestList.push("Ishaan");

/* 
For Terminal Code... Ctrl + Shift + `
*/