/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To print ASCII value of characters of 7.c's bunch of characacters
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Strings are of variable length.
A string is just an array of characters.
String contains n+1 bytes where n is the length of string. That extra last byte is \0. This \0 is called NUL.

*/

#include<stdio.h>

int main()
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3); // %i for int

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 8.c
./a.exe

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/