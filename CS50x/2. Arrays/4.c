/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: Better version of 2.c & 3.c
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Array- A way of storing your data back to back in computer's memory in such a way that you can access each individual member easily.

*/

#include<stdio.h>

int main()
{

    int scores[3]; //array
    //indexing
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %f\n", (scores[0]+ scores[1] + scores[2] ) / (float) 3); // Or you can explicitly convert 3 into float using (float)

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 4.c
./a.exe

*/