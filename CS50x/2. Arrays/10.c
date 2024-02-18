/*

> Date Created: July 20, 2023
> Author: Ishaan Rastogi
> Purpose: To create a string of 2 words and print their characters seperately
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"

int main()
{
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%c %c %c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c %c %c %c\n", words[1][0], words[1][1], words[1][2], words[1][3]);

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 10.c -o 10 cs50.c
./10

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/