/*
> Date Created: May 30, 2024
> Author: Ishaan Rastogi
> Purpose: Better way of 4.js
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

/*
Old code- 

var tweet = prompt("Compose your tweet:")
var tweetCount = tweet.length;
alert ("You have written " + tweetCount + "characters, you have been " + (140-tweetCount) + "characters remaining" )
*/

// New code
var tweet = prompt("Compose your tweet:")
alert ("You have written " + tweet.length + "characters, you have been " + (140-tweet.length) + "characters remaining" )

/* 
For Terminal Code... Ctrl + Shift + `
*/