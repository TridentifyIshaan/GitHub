/*

> Date Created: July 16, 2023
> Author: Ishaan Rastogi
> Purpose: To create user input calculations for integer values
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"

/* Topic: Removal of Floating-point Imprecision
To change directory: cd pset1/

*/

// You have to write first lines of each block codes here ending with ;

int main()
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    double z = (double) x / (double) y;
    printf("%.15f\n", z ); //%.20f for float with 15 decimal places
}

// Limit of the value of any integer is roughly around 2 billion ( 2,000,000,000 ) and similarly roughly around 2 billion on the negetive side too

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc mcalc_4.c -o mcalc_4 cs50.c
./mcalc_4

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/