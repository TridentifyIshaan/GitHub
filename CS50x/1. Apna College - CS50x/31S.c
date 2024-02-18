/*

> Date Created: June 20, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to find out if user is adult or not using ternary operators.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main() {

    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    
    age >= 18 ? printf("You are adult. \n") : printf("You are minor. \n");

    /*
    
    Topic: Ternary operators  ** Some placement questions come from here.
    Condition ? doSomething if TRUE : doSomething if FALSE;
    
    They are used to shorten the code and they can be only used when there is a single line function.

    */
   
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 23.c
./a.exe
 
 */