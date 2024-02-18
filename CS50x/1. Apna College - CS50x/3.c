/*

> Date Created: June 13, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to showcase how input is taken from user and then data is printed but it is specific to showcase how to print sum of 2 variables.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main(void) {
    
    /*
    
    Topic: Mathematical Operations
    + - / * can be handled like this

    */

    int a, b;
    printf("Enter a:");
    scanf("%d", &a);

    /*
    ampersand (&) is basically pointing to the address of age
    Here, we are taking integer a, and then we ask them to enter value of a which we are gonna store in a by first scanning the variable using scanf and then using '&' to point out to the memory address to the variable 'age'
    */

    printf("a is: %d \n", a);


    printf("Enter b:");
    scanf("%d", &b);
    printf("b is: %d \n", b);

    int sum = a + b;
    printf("Sum is, %d \n", sum);
                //OR
    printf("Sum is, %d \n", a + b);
   
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 3.c
./a.exe
 
 */