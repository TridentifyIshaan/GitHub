/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: Alternate method to carry out code of 2.c
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

This alternate method of converting stuffs explicitly from one datatype to another is called typecasting.

*/

#include<stdio.h>

int main()
{

    int score1 = 72;
    int score2 = 73;
    int score3 = 33;
    printf("Average: %f\n", (score1 + score2 + score3 ) / (float) 3); // Or you can explicitly convert 3 into float using (float)

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 3.c
./a.exe

*/