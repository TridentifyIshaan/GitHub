/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To find out exit status
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*
Int is always for main, and it indicates that main will always return an integer, even through we have never done it explicitly. Usually main returns 0 by default. But it would be weird if you saw an error message saying 0, so 0 is just hidden. You would never see it on the screen. But it's happening automatically by way of how C is designed. So we will write one final program of Arrays to show you these exit statuses.
Command- echo $?
Type this after else command is done when you just type './18' without the name.
*/

#include"cs50.h"
#include<stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    else
    {
        printf("Hello, %s\n", argv[1]);
        return 0;
    }
}

//Note that while using GCC as a compiler, 0 will be shown as True while 1 will be shown as False

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 18.c -o 18 cs50.c
./18 Ishaan

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/