/*

> Date Created: July 16, 2023
> Author: Ishaan Rastogi
> Purpose: To create block of whatever size user wants and restrict input of negative numbers
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"

/* Topic: To change directory: cd pset1/

Third loop: Do While

*/

int main()
{
    // Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while ( n < 1 );

    // Print grid of bricks
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

gcc mario_5.c -o mario_5 cs50.c
./mario_5

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

 */