/*

> Date Created: July 5, 2023
> Author: Ishaan Rastogi
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

> Practice Question 3: WAP to find if a character entered by user is uppercase or not

*/

#include<stdio.h>

int main() {
    
    char ch;
    printf("Enter character: ");
    scanf("%d", &ch);
    
    if (ch >= 'A' && ch <= 'Z') // ch >= 'A' & ch >= 65 is one of the same thing because ASCII value of A is 65.
    {
        printf("Upper case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case");
    }
    else
    {
        printf("Not English Letter");
    }
    
}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc Q3.c
./a.exe
 
 */