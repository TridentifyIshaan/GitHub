/*

> Date Created: July 4, 2023
> Author: Ishaan Rastogi
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

> Practice Question 1: WAP to check if a student passed or failed: marks > 30 is PASS, marks <= 30 is FAIL

*/

#include<stdio.h>

int main() {
    
    int marks;
    printf("Enter the marks(0-100):");
    scanf("%d", &marks);

    if (marks <= 30)
    {
        printf("Student failed!");
    }
    else if (marks > 30 && marks <= 100 )
    {
        printf("Student passed!");
    }
    else
    {
        printf("Invalid!");
    }
   
}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc Q1.c
./a.exe
 
 */