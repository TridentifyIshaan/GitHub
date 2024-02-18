/*

> Date Created: August 12, 2023
> Author: Ishaan Rastogi
> Purpose: To make 1.c shorter and easier to code
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *list = malloc( 3 * sizeof(int)); //declaring list as a pointer

    if (list == NULL)
    {
        return 1;
    }

    list[0]=1;
    list[1]=2;
    list[2]=3;

    // Changed the code from here

    int *tmp = realloc(list, 4 * sizeof(int)); // 1st one is the one which has to be reallocated & the 2nd one is the one to what size it has to be reallocated till
    if ( tmp == NULL )
    {
        free(list); // if line code 36 fails then we should free the memory we previosly malloced
        return 1;
    }
    
    list = tmp;
    list[3] = 4; //adding 4 as 4th value - changing garbage value after 3 to 4

    for ( int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
    
    free(list); // free(tmp); can also work here but use this only for the importance of able to learn it.
    return 0;
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 2.c
./a.exe

*/