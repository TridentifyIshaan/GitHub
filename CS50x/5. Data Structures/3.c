/*

> Date Created: August 26, 2023
> Author: Ishaan Rastogi
> Purpose: 2.c using Linked list and iterating it
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

/*

Struct           Struct is a keyword in C that lets us build our own structure in memory, like a collection of 2 or more variables.
.                The Dot operator allows you to go inside of a structure and get the individual variables within.
*                And then, the star operator is used to declare pointers and also used to dereference pointers.

Here is a way we can apply the usage of . & * operators together, i.e., to go to an address and then look inside of a structure by using ' -> '

Topic: Next Data Structure ( Linked List )

Downside of linked lsit instead of array is we use twice as much memory because now in addition to storing the integers 1,2,3 we are also storing a pointer for each of those. Second downside is we can't index into it because the randomly stored items are linked here. 

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL;
    for ( int i = 1; i < argc; i++) // starting the loop at 1 instead of 0 but it's going up to argc (argument count- how many words are at the prompt) because the first value in argv is actually the name of the program which is not a number 
    {
        int number = atoi(argv[i]); // argv[i] is a string aka char* that is not an int, so to convert strings to integers, we have used atoi
        node *n = malloc(sizeof(node));
        if ( n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        n->next = list;
        list = n;
    }
    node *ptr = list; // ptr = pointer
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
    // freeing memory

    ptr = list;
    while ( ptr != NULL)
    {
        node *next = ptr->next; //Give a temporary pointer like node *next, set it equal to the place you want to go next. Now you can free pointer and then you can update pointer to be that next value or else since the pointer is pointed at 1, 2, 3, it will completely clear out 1, 2, 3.
        free(ptr);
        ptr = next;
    }

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 3.c
./a.exe 1 2 3

OUTPUT-

3
2
1

*/