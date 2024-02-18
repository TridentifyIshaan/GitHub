/*

> Date Created: June 15, 2023
> Author: Ishaan Rastogi
> Purpose: This code is to showcase relational operators' working
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

*/

/*
    
    Topic: Control Instructions - Used to determine flow of program
    
    a> Sequence Control- Runs sequentially ( All the programmes till now contained this CIs )
    
    b> Decision Control- Topics like If else
    
    c> Loop Control- Topics like For, while loops
    
    d> Case Control- Depends on different cases

    Topic: Types of Operators

    a> Arithmatic- +, -, *, /, %
    
    b> Relational- ==, >, >=, <, <=, !=
            != denotes not equal while == denotes equal
    
    c> Logical- They just work like logic gates work.
                    && (AND), || (OR), ! (NOT)
    
    >>> Operator Precedence Order:
      
                    (NOT) > (* , / , %) > ( + , - ) > (<, <=, >, >=) > ( EQUAL TO, NOT EQUAL TO) > (AND) > (OR) > (=) (Assignment operator)

    d> Assignment- = , Short hand operators { +=, -=, *=, /=, %= }
    
    e> Bitwise- ^, &

    f> Ternary- Conditional operators
    */
   

#include<stdio.h>
int main() {
    
// Binary Output: 1 denotes True & 0 denotes False values

    printf("%d \n", 4 == 4);
    printf("%d \n\n", 4 == 3);
    
    printf("%d \n", 3 > 4 && 5 > 2 ); // AND (&&)
    printf("%d \n\n", 3 > 4 || 5 > 2 ); // OR (||)
    
    printf("%d \n", !( 5 > 3) );
    printf("%d \n\n", !( 5 > 3) && ( 3 > 4 ) ); // Precedence- NOA Not And Or

    int a = 1;
    int b = 2;
    a += b; // Instead of this a = a + b;
    printf("%d \n", a);

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 12.c
./a.exe

 */