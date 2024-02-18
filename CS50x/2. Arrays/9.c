/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To create string & print it and also to print it's characters
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Strings are of variable length.
A string is just an array of characters.
String contains n+1 bytes where n is the length of string. That extra last byte is \0. This \0 is called NUL.

*/

#include<stdio.h>
#include"cs50.h"

int main()
{
    string s = "HI!";
    printf("%s\n", s); // %s for string
    printf("%c\n%c\n%c\n", s[0], s[1], s[2] );
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 9.c -o 9 cs50.c
./9

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/