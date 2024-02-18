/*

> Date Created: June 20, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to find print days
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>

int main() {
    
    int day; // 1-Mon, 2-Tue, 3-Wed, 4-Thurs, 5-Fri, 6-Sat, 7-Sun
    //similarly char day; { m-Mon, t-Tue, ... }
    printf("Enter the day number (1-7):");
    scanf("%d", &day);

    /*
    
    Topic: Switch
    
    Type switch and enter and see the magic via vs code.
    
    */

    switch (day)
    {
    case 1: printf("Monday \n");
        break;
    
    case 2: printf("Tuesday \n");
        break;
    
    case 3: printf("Wednesday \n");
        break;
    
    case 4: printf("Thursday \n");
        break;
    
    case 5: printf("Friday \n");
        break;
    
    case 6: printf("Saturday \n");
        break;
    
    case 7: printf("Sunday \n");
        break;
    
    default : printf("Not a valid day!");

    }

    
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 24.c
./a.exe
 
 */