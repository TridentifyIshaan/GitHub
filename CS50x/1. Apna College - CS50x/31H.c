/*

> Date Created: June 16, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to showcase how to ask the user their name.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

#include<stdio.h>
#include"cs50.h"

int main() {

string answer = get_string("What's your name? ");
printf ("Hello, %s! \n\n", answer);

string first = get_string("What's your first name? ");
string last = get_string("What's your last name? ");
printf ("Hello, %s %s! \n", first, last);

}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 12.c -o 12 cs50.c
./12

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

 */