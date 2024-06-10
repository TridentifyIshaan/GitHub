/*
> Date Created: June 10, 2024
> Author: Ishaan Rastogi
> Purpose: Write lyrics of the song 99 bottles of Beer.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

var numberOfBottles = 99
while (numberOfBottles >= 0) {
    var bottleWord = "bottle";
    if (numberOfBottles === 1) {
        bottleWord = "bottles";
    } 
    console.log(numberOfBottles + " " + bottleWord + " of beer on the wall");
    console.log(numberOfBottles + " " + bottleWord + " of beer,");
    console.log("Take one down, pass it around,");
	numberOfBottles--;
    console.log(numberOfBottles + " " + bottleWord + " of beer on the wall.");
}

/* 
For Terminal Code... Ctrl + Shift + `
*/