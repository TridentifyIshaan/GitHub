/*

> Date Created: July 29, 2023
> Author: Ishaan Rastogi
> Purpose: To print out memory allocations of 1024 integers
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

// Garbage values- It means that a variable that you might have defined or declared, if you don't give it an explicit value, who knows what's going to be there.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int scores[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 10.c
./a.exe

*/