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
    char c = get_char ("Do you agree? ");

    if ( c == 'y' || c == 'Y') // when dealing with single character we deliberately use single quotes ''
    {
        printf( "Agreed. \n");
    }
    
    else if ( c == 'n' || c == 'N')
    {
        printf(" Disagreed. \n");
    }

    else
    {
        printf(" Invalid. \n");
    }

}


/*

Topic: Conditionals If, else, else if using OR ( || )

! = NOT
&& = AND
|| = OR

*/

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 15.c -o 15 cs50.c
./15

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

 */