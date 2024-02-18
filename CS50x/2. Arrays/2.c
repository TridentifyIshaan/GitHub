/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To calculate average score
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Datatpes with the number of bytes they take: (1 byte = 8 bits)

bool    1 byte
int     4 byte
long    8 bytes
float   4 bytes
double  8 bytes
char    1 byte
string  n+1 bytes ( variable on data )

*/

#include<stdio.h>

int main()
{

    int score4 = 72;
    int score5 = 73;
    int score6 = 33;
    printf("Average: %f\n", (score4 + score5 + score6 ) / 3.0); // Use 3.0 instead of 3 so that atleast one value that is 3 is float to make the answer come in float only

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 2.c
./a.exe

*/