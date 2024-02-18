/*

> Date Created: July 26, 2023
> Author: Ishaan Rastogi
> Purpose: To copy the string and capitalise first letter in each string.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include"cs50.h"
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char *s = get_string("s: ");
    char *t = s;

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("\ns: %s\n", s);
    printf("t: %s\n", t);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 7.c -o 7 cs50.c
./a.exe

*/