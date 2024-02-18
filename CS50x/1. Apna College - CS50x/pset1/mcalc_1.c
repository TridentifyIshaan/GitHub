/*

> Date Created: July 16, 2023
> Author: Ishaan Rastogi
> Purpose: To create user input calculations for float values
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"

/* Topic: Integer overflow
If the number of bits of storage is short, then the code will run wrongly and showcase something else than the usual correct answer because of integer overflow. That's due to the limit we have told below
To change directory: cd pset1/

*/

// You have to write first lines of each block codes here ending with ;

int main()
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    printf("%li\n", x + y ); //%li for long integer
}

// Limit of the value of any integer is roughly around 9 quantillion ( 9,000,000,000,000,000,000 )

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc mcalc_1.c -o mcalc_1 cs50.c
./mcalc_1

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/