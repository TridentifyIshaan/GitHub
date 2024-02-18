/*

> Date Created: July 26, 2023
> Author: Ishaan Rastogi
> Purpose: To compare strings
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include"cs50.h"
#include<stdio.h>
#include<string.h>

int main()
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    if ( strcmp(s,t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 6.c -o 6 cs50.c
./6

*/