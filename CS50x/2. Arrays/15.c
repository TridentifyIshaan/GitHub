/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: Better version of 14.c
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

// There is no need for if loop because it will not change the stuffs which are already in uppercase. Hence modifying 14.c's code.
// We modified for loop also. See the changes by comparing both 14.c & 15.c
int main()
{
    string s = get_string("Before: ");
    printf("After:");
    for (int i=0, n = strlen(s); i <n; i++)
    {
        printf("%c", toupper(s[i]));            
    }
}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 15.c -o 15 cs50.c
./15

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/