/*
> Date Created: May 30, 2024
> Author: Ishaan Rastogi
> Purpose: Better way of 8.js
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working
*/

/*
Old code- 

var tweet = prompt("Compose your tweet:");
var tweetUnder140 = tweet.slice(0,140);
alert(tweetUnder140);
*/

// New code
var tweet = prompt("Compose your tweet:");
alert(tweet.slice(0,140));

/*
For Terminal Code... Ctrl + Shift + `
*/