/*

> Date Created: July 26, 2023
> Author: Ishaan Rastogi
> Purpose: Just to print the number in 2.c
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main()
{
    int n=50;
    int *p = &n;
    printf("%i\n", *p); // This line is modified
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 3.c
./a.exe

*/