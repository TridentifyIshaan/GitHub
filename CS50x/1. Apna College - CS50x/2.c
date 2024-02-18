/*

> Date Created: June 13, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to showcase how format specifiers work and how to print datatypes
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
int main(void) {
    
    /*
    
    Topic: Format Specifiers

    %d = double datatype, for double digit values
    %f = for float datatype values
    %c = for char datatype values

    */

    int age = 22;
    printf("Age is, %d \n", age);
    
    float pi = 3.14;
    printf("Value of pi is, %f \n", pi);
    
    char star ='*';
    printf("Symbol of star is, %c \n", star);
    
    // to update or change the value of variable 'age' which already defined
    age = 24;

}

/* 

`Ctrl + Shift + `

Terminal Code Loading...

gcc 2.c
./a.exe
 
 */