/*

> Date Created: July 23, 2023
> Author: Ishaan Rastogi
> Purpose: Better version of 4.c
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

/*

string.h library's functions:

strcasestr - locate a substring
strcmp - compare two strings
strcpy - copy a string
strlen - calculate the length of a string
strstr - locate a substring

You can think of arrays as a very lightweight data structure, in that it allows you to cluster related data back to back to back to back. And this is how strings are implemented. They are a data structure effectively implemented with an array. We can implement our very own data structures along with customised data types too. Wow, isn't it so cool?

*/

#include"cs50.h"
#include<stdio.h>
#include<string.h>

//Creating data structures
typedef struct
{
    string name;
    string number;
}
person;

int main()
{
    person people[2]; //array of size 2 containing 1 person each
    // New type of syntax - Learn
    people[0].name = "Carter";
    people[0].number = "9711057689";
    //We can further update oe add on name and numbers of person
    people[1].name = "David";
    people[1].number = "8711057699";
    
    string name = get_string("Name: ");
    for ( int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0 )
        {
            printf("Found\nPhone Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 4.c -o 4 cs50.c
./4

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/