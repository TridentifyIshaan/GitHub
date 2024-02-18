/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To check is something is upper or lower case and printing the string in upper case only using ctype.h library.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

ctype.h is a library of c datatypes related functions which are shown below:

isalnum - character classification functions
isalpha - character classification functions
isblank - character classification functions
isdigit - character classification functions
islower - character classification functions
ispunct - character classification functions
isspace - character classification functions
isupper - character classification functions
tolower - convert uppercase or lowercase
toupper - convert uppercase or lowercase

*/

#include"cs50.h"
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main()
{
    string s = get_string("Before: ");
    printf("After:");
    for (int i=0; i < strlen(s); i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 14.c -o 14 cs50.c
./14

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/