/*

This note will be available only on first file of each folder present in folder C Lang.
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C Language.
Author has made these programmes as a reference using courses of Apna College & Harvard, while himself learning C Language for the first time.

/*

> Date Created: July 21  & 22, 2023
> Author: Ishaan Rastogi
> Purpose: To create a program to find a particular number from an array
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

/*

List of algorithms from slowest to fastest:

O (n^2)
O (n log n)
O (n)
O (log n)
O (1)

O is used to denote the order of algorithm's running time in magnitude but it also describes, more specifically, an upper bound.
Ω is used to describe lower bound on an algorithm, often in the context of best case, thought not necessarily.
If an algorithm happens to have an identical upper bound and lowe bound, we use Θ.

*/

#include"cs50.h"
#include<stdio.h>

int main()
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50}; //syntax for creating an array of numbers.

    int n = get_int("Number: ");
    // implementation of linear search
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n )
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 1.c -o 1 cs50.c
./1

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/