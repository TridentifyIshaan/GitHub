/*

> Date Created: July 26, 2023
> Author: Ishaan Rastogi
> Purpose: To showcase pointer arithmatics
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main()
{
    char *s ="HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 5.c
./a.exe

*/