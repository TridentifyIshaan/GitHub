/*

> Date Created: July 24, 2023
> Author: Ishaan Rastogi
> Purpose: To show recursion
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

/*

In programming, recursion refers to the ability of a function to call itself. In the world of mathematics if you have a function f, and it appears on both sides of the formula, that would be a recursive function. In programming, if any time a function calls itself is a recursive function.

*/

#include"cs50.h"
#include<stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw (height);
}

void draw(int n)
{
    //Base case will ensure that this code doesn't run forever
    if (n <= 0)
    {
        return;
    }
    // Main code
    draw(n-1);
    
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 6.c -o 6 cs50.c
./6

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/