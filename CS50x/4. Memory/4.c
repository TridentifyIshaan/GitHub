/*

> Date Created: July 26, 2023
> Author: Ishaan Rastogi
> Purpose: To showcase address of characters
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main()
{
    char *s ="HI!";
    printf("%p\n", s); // char
    printf("%p\n", &s[0]); // address of first character of char
    printf("%p\n", &s[1]); // address of second character of char
    printf("%p\n", &s[2]); // address of third character of char
    printf("%p\n", &s[3]); // address of fourth character of char
    
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 4.c
./a.exe

*/