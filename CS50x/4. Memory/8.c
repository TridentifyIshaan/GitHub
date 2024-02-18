/*

> Date Created: July 26, 2023
> Author: Ishaan Rastogi
> Purpose: To copy out the string and capatilise the first letter in the variable t only
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

/*

Various functiobs if stdlib.h library:

atof - convert a string to a float
atoi - convert a string to an int
atol - convert a string to a long
free - free dynamically allocated memory
malloc - allocate memory dynamically
random - generate a pseudorandom number
realloc - reallocate memory dynamically
srandom - seed pseudorandom number generation

*/

#include"cs50.h"
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s) + 1); // Make senses lol +1 for NUL (\0)

    for (int i = 0; i < strlen(s) + 1; i++) // + 1 to also copy out the null value
    {
        t[i] = s[i];
    }
    
    if ( strlen(t) > 0 )
    {
        t[0] = toupper(t[0]);
    }
    
    printf("\ns: %s\n", s);
    printf("t: %s\n", t);
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 8.c -o 8 cs50.c
./a.exe

*/