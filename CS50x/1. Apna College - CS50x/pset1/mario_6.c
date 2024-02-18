/*

> Date Created: July 16, 2023
> Author: Ishaan Rastogi
> Purpose: To create code using abstractions
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"

/* Topic: Abstraction- Basically making functions in the file itself and then using them. This is onyl used for bigger and complex solutions
To change directory: cd pset1/

*/

// You have to write first lines of each block codes here ending with ;

int get_size(void);
void print_grid(int SIZE);

int main()
{
    int n = get_size();    //Abstraction 1
    print_grid(n);         //Abstraction 2
}

//Creating a function

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while ( n < 1 );
    return n;
}

void print_grid(int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j=0; j < SIZE; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc mario_6.c -o mario_6 cs50.c
./mario_6

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

 */