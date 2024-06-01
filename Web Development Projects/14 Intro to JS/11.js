/*
> Date Created: May 31, 2024
> Author: Ishaan Rastogi
> Purpose: Capitalising the first letter & greeting the user
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

//1 Create a var that stores the name that user enters via prompt
var Name = prompt("What is your name?");

//2 Capatalise the first letter of their name

//a Isolate the first character
var firstChar = Name.slice(0,1)

//b Turn the first char to upper case
var UC_firstChar = firstChar.toUpperCase();

//c Isolate the rest of the name
Rest_Name = Name.slice(1, Name.length);

//d Making the rest of the name in lowercase
RestName = Rest_Name.toLowerCase(); 

//e Concatenate the first char with the rest of the char
var FirstCap_Name = UC_firstChar + Rest_Name;

//3 We use the capatalised version of their name to greet
alert("Hello, " + FirstCap_Name);

/*
For Terminal Code... Ctrl + Shift + `
*/