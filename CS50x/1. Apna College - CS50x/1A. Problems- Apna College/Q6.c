/*

> Date Created: July 4, 2023
> Author: Ishaan Rastogi
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

> Practice Question 2: WAP to give grades to a student: marks < 30 is C, 30 <= marks < 70 is B, 70 <= marks < 90 is A, 90 <= marks <= 100 ia A+ 

*/

#include<stdio.h>

int main() {
    
    int marks;
    printf("Enter the marks(0-100):");
    scanf("%d", &marks);

    if (marks <= 30)
    {
        printf("Grade C!");
    }
    else if (marks > 30 && marks <= 70 )
    {
        printf("Grade B!");
    }
    else if (marks > 70 && marks <= 90 )
    {
        printf("Grade A!");
    }
    else if (marks > 90 && marks <= 100 )
    {
        printf("Grade A+!");
    }
    else
    {
        printf("Invalid!");
    }
   
}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc Q2.c
./a.exe
 
 */