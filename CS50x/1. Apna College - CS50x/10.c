/*

> Date Created: June 14, 2023
> Author: Ishaan Rastogi
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

> Practice Question 3: WAP to solve:    int a = 1.999999;

*/


/*
Topic: Explicit Concersion
Datatype in which a value has to be forcefully coverted is written in curly brackets just before the numerical value
*/

#include<stdio.h>

int main(void) {
    
    int a = (int) 1.999999; // if (int) is not used, error will be shown
    printf("%d \n", a);
   
}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 10.c
./a.exe
 
 */