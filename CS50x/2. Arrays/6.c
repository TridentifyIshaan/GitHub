/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: Creating a system to calculate average of N no. of scores using Function creating and calling. 
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Array- A way of storing your data back to back in computer's memory in such a way that you can access each individual member easily.
Arrays can also be used as arguments which can be passed around.
*/

#include<stdio.h>
#include"cs50.h"

const int N = 10; // global (constant) variable N set to 10

float average(int array[]);

int main()
{

    int scores[N]; //array
    //loop for user input of scores
    for (int i=0; i < N; i++ )
    {
    scores[i] = get_int("Score:");
    }

    printf("Average: %f\n", average(scores)); // Calling average function here by passing in the whole array of scores.

}

float average(int array[])
{
    int sum =0;
    for ( int i=0; i < N; i++)
    {
        sum += array[i];
    }
    
    return sum / (float) N;

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 6.c -o 6 cs50.c
./6

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/