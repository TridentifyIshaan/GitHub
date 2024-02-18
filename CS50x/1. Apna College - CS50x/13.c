/*

> Date Created: June 15, 2023
> Author: Ishaan Rastogi
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working

> Practice Question 4: WAP to check if the number is divisible by 2 or not

/*

Topic: Operator Precedence Order
      
(NOT) ! > (* , / , %) > ( + , - ) > (<, <=, >, >=) > ( EQUAL TO, NOT EQUAL TO) (==, !=) > (AND) (&&) > (OR) (||) > (=) (Assignment operator)

*/


#include<stdio.h>

int main(void) {
    
    int a;
    printf("Enter a number:");
    scanf( "%d", &a );
    printf( "%d \n", a % 2 == 0 );

// even -> 1 ; odd -> 0 (Since 1 is for True & 0 for False)

}

/*

Ctrl + Shift + `

Terminal Code Loading...

gcc 13.c
./a.exe
 
*/