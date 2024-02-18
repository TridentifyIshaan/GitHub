/*

> Date Created: July 16, 2023
> Author: Ishaan Rastogi
> Purpose: To create block of fixed size n by n
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

// Topic: To change directory: cd pset1/

int main()
{
    const int n = 5; // fixing the value of n by declaring the integer n, a constant
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc mario_4.c
./a.exe

*/