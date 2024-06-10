/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Who is gonna speak first from the cast of 24?
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

var names = ["Anil Kapoor", "Tisca Chopra",, "Ashish Vidyarthi", "Neil Bhoopalam", "Sapna Pabbi"];

function whoIsFirst (names) {
    var noOfPeople = names.length;
    var RandomPerson = Math.floor(Math.random() * noOfPeople);
    var RandomPerson = names[RandomPerson];

    return RandomPerson + " is going to speak first!";
}

/*
For Terminal Code... Ctrl + Shift + `
*/