/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To find out length of a string
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

You can find out length of a string but not an array

*/

#include<stdio.h>
#include"cs50.h"

int main()
{
    string name = get_string("What's your name? ");
    int n =0;
    while (name[n] != '\0' ) // != not equal to
    {
        n++;
    }
    printf("%i\n", n);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 11.c -o 11 cs50.c
./11

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/