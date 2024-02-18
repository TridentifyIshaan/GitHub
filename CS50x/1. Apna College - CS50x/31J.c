/*

> Date Created: June 18, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to showcase how conditionals work.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"

int main() 
{
    int x = get_int ("What's x? ");
    int y = get_int ("What's y? ");

    if ( x < y)
    {
        printf("x is less than y \n");
    }
    
    else if (x>y)
    {
        printf("x is not less than y \n");
    }

    else            //no need to write else if (x==y)
    {
        printf("x is equal to y \n");
    }

}


/*

Topic: Conditionals If, else, else if

*/

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 14.c -o 14 cs50.c
./14

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

 */