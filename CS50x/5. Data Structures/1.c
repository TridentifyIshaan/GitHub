/*

This note will be available only on first file of each folder present in folder C Lang.
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C Language.
Author has made these programmes as a reference using courses of Apna College & Harvard, while himself learning C Language for the first time.

/*

> Date Created: August 12, 2023
> Author: Ishaan Rastogi
> Purpose: Changing pointer's pointing way, shifting from old to new location
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

    // ...

    int *tmp = malloc ( 4 * sizeof(int)); //declaring tmp as a pointer

    if ( tmp == NULL )
    {
        free(list); // if line code 36 fails then we should free the memory we previosly malloced
        return 1;
    }

    for ( int i = 0; i < 3; i++)
    {
        tmp[i] = list[i]; //copying the list
    }

    tmp[3] = 4; //adding 4 as 4th value - changing garbage value after 3 to 4
    free(list); // Freeing the list for the first time as earlier one was for if an error occurs.
    list = tmp; //equaling the way both the pointers ( list & tmp pointers ) point

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

gcc 1.c
./a.exe

*/