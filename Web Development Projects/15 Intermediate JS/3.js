/*
> Date Created: June 09, 2024
> Author: Ishaan Rastogi
> Purpose: Love Calculator made better
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

prompt("What is your name?");
prompt("What is their name?");

var loveScore = Math.random() * 100;
loveScore = Math.floor(loveScore) + 1;

if ( loveScore === 100 ) {
    alert("Your love score is" + loveScore + "%." + " You love each other!");
} else {
    alert("Your love score is" + loveScore + "%.");
}

// === 'is equal to' sign ; !== 'is not equal to' sign
// == 'equity sign' ; For ex - 'a == b' means value of a is equal to the value of b but 'a === b' might hold false because it will compare also the datatypes of both variables. If datatypes of both the variables match then 'a===b' will hold true.

/* 
For Terminal Code... Ctrl + Shift + `
*/