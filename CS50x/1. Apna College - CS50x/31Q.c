/*

> Date Created: June 20, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to find out if user is adult or not.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main() {

    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    
    if(age >= 18)
    {
        printf("You are adult.");
        printf("You are eligible to vote! \n");
    }
    
    else
    {
        printf("You are minor. \n");
        printf("You are not eligible to vote yet. \n");
    }

    /*
    
    Topic: Conditional Statements
    Types: If-Else & Switch 
    NOTE- Even there is only one statement in if and else seperately, then we can run the programme without even using the curly brackets but
    the indentation will be same just like it is in the curly brackets, one tab after. But you should always use curly brackets to be consistent.
    
    */
   
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 21.c
./a.exe
 
 */