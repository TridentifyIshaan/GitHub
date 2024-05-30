/*
> Date Created: May 30, 2024
> Author: Ishaan Rastogi
> Purpose: To create a program to prompt a user about the words remaining in their tweet.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

var tweet = prompt("Compose your tweet:")
var tweetCount = tweet.length;
alert ("You have written " + tweetCount + "characters, you have been " + (140-tweetCount) + "characters remaining" )

/* 
For Terminal Code... Ctrl + Shift + `
*/