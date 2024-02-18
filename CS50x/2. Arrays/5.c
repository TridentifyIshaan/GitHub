/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: User input version of 5.c
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Array- A way of storing your data back to back in computer's memory in such a way that you can access each individual member easily.

*/

#include<stdio.h>
#include"cs50.h"

int main()
{

    int scores[3]; //array
    //loop for user input of scores
    for (int i=0; i < 3; i++ )
    {
    scores[i] = get_int("Score:");
    }

    printf("Average: %f\n", (scores[0]+ scores[1] + scores[2] ) / (float) 3); // Or you can explicitly convert 3 into float using (float)

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 5.c -o 5 cs50.c
./5

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/