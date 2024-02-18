/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To genarlise 16.c
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include"cs50.h"
#include<stdio.h>

int main(int argc, string argv[]) // To use command line arguments
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1], argv[2]);
    }
    else // if 2 words are not typed then this outcome will print
    {
        printf("Hello, world\n");
    }
}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 17.c -o 17 cs50.c
./17 Ishaan Rastogi

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/