/*

> Date Created: June 14, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to showcase correct type declaration instructions.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main() {
    // All these are valid TDIs
    int a = 22;
    int b = a;
    int c = b + 1;
    int d = 1, e; // e's value is not assigned, that's why it is correct statement
    int x,y,z;
    x = y = z = 1;

    /*
    Topic: Invalid TDIs
    Key Point: TDIs declare variables before using it

    int oldAge = 22;
    int newAge = oldAge + years;
    int years = 2;

    Since years had been declared after the equation the TDI is not valid on the equation

    int x = y = z = 1;      Since use & declare can't be done at the same time.     |   Correct solution is in line 19 & 20
    */
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 6.c
./a.exe
 
 */