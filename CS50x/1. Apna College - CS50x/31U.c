/*

> Date Created: July 4, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to find out if the number is positive or negative and odd or even
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main()
{ // Topic: Nested Switch- Switch in a switch
    
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("positive \n");
        if (number % 2 == 0)
        {
            printf("even \n");
        } else {
            printf("odd");
        }
    }

    else
    
    {
        printf("negative \n");
        if (number % 2 == 0)
        {
            printf("even \n");
        } else {
            printf("odd");
        }
    }
    
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 25.c
./a.exe
 
 */