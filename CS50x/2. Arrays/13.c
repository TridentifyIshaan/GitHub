/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To check is something is upper or lower case and printing the string in upper case only.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"
#include<string.h>
#include<ctype.h>

int main()
{
    string s = get_string("Before: ");
    printf("After:");
    for (int i=0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c",s[i] - 32); //Because the ASCII Value gap between lower and upper case alphabets is 32
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

gcc 13.c -o 13 cs50.c
./13

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/