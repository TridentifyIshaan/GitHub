/*

> Date Created: July 15, 2023
> Author: Ishaan Rastogi
> Purpose: Printing numbers from 1 to 100 in increasing order
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main() {

    /*
    
    Topic: Loop Control Instructions
    To repeat some parts of the program
    Types- For, while, do while
    
    for (initialisation; condition; updation) {}

    */
   
    for(int i=1; i <=100; i += 1) // i++ can also replace it, you can't write i+++ for 1=+2
    {
        printf("%d \n", i);
    }

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 27.c
./a.exe
 
 */