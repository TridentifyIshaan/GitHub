/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To find out length of a string using function from string.h library
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

string.h is a library of string-related functions which are shown below:

strcasestr - locate a substring
strcmp - compare two strings
strcpy - copy a string
strlen - calculate the length of a string
strstr - locate a substring

*/

#include<stdio.h>
#include"cs50.h"
#include<string.h>

int main()
{
    string name = get_string("What's your name? ");
    int n = strlen(name);
    printf("%i\n", n);

}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 12.c -o 12 cs50.c
./12

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/