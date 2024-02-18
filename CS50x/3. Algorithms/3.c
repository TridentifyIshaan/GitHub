/*

> Date Created: July 22, 2023
> Author: Ishaan Rastogi
> Purpose: Connecting numbers of people to their names and finding people's numbers out by calling people's name
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
    string names[] = {"Carter" , "David" };
    string numbers[] = {"9711057689" , "8711057699"};

    string name = get_string("Name: ");
    for ( int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0 )
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 3.c -o 3 cs50.c
./3

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/