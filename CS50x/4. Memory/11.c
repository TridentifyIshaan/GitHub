/*

> Date Created: July 29, 2023
> Author: Ishaan Rastogi
> Purpose: To swap values of 2 variables
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

// Garbage values- It means that a variable that you might have defined or declared, if you don't give it an explicit value, who knows what's going to be there.

#include<stdio.h>

void swap ( int *a, int *b);

int main()
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap (&x, &y); // Calling the swap function and & to get address of x & y
    printf("x is %i, y is %i\n", x, y);
}

void swap ( int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 11.c
./a.exe

*/