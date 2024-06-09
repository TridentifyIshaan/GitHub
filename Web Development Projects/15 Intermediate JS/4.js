/*
> Date Created: June 09, 2024
> Author: Ishaan Rastogi
> Purpose: Love Calculator made more real
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

/*

&& AND
|| OR
! NOT

*/

prompt("What is your name?");
prompt("What is their name?");

var loveScore = Math.random() * 100;
loveScore = Math.floor(loveScore) + 1;

if ( loveScore > 70 ) {
    alert("Your love score is" + loveScore + "%." + " You love each other! ");
}

else if ( loveScore > 30 && loveScore <= 70 ) {
    alert("Your love score is" + loveScore + "%." + " You are somewhat in the making! ");
}

else {
    alert("Your love score is" + loveScore + "%." + " You  go together like oil & water ");
}

/* 
For Terminal Code... Ctrl + Shift + `
*/