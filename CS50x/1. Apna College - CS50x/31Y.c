/*

> Date Created: July 15, 2023
> Author: Ishaan Rastogi
> Purpose: Experimenting with increment operators
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main() {

    /*
    Topic: Increment operators
    Post-increment operator- i++
    Pre-increment operator- ++i

    Similarly decrement operators i-- & --i
    
    */
   
    int i=1;
    printf("%d \n", i++); // use, then increase
    printf("%d \n", i); // the above command will print 1 but internally the value has been shifted to 2 which is now showcased using this command

    int j=1;
    printf("%d \n", ++j); // increase, then use ; here it will first add 1 in value of j and then show it
    
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 29.c
./a.exe
 
 */