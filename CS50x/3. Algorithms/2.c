/*

> Date Created: July 22, 2023
> Author: Ishaan Rastogi
> Purpose: To find out Monopoly starting pieces
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

/*

string.h library's functions:

strcasestr - locate a substring
strcmp - compare two strings
strcpy - copy a string
strlen - calculate the length of a string
strstr - locate a substring

*/

#include"cs50.h"
#include<stdio.h>
#include<string.h>

int main()
{
    string strings [] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"}; 

    string s = get_string("String: ");
    // implementation of linear search
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0 ) //it takes 2 strings as input, learn this way
        {
            printf("Found\n");
            return 0; // so that loops doesn't keep going one
        }
    }
    printf("Not found\n");
    return 1; // so that loops doesn't keep going one
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 2.c -o 2 cs50.c
./2

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/