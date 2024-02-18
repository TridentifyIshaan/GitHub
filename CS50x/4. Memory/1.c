/*

This note will be available only on first file of each folder present in folder C Lang.
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C Language.
Author has made these programmes as a reference using courses of Apna College & Harvard, while himself learning C Language for the first time.

/*

> Date Created: July 24, 2023
> Author: Ishaan Rastogi
> Purpose: To create a program to find a particular number from an array
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

/*

Different types of Binary system:

1. Binary system- 01 ( base-2 )
2. Decimal system- 0123456789 ( base-10 )
3. Hexadecimal system- 0123456789ABCDEF ( Also known as base-16 in technical terms )

How does values working in Hexadecimal system?

Zero- 00
One- 01
Two- 02
Three- 03
Four- 04
Five- 05
Six- 06
Seven- 07
Eight- 08
Nine- 09
Ten- 0A
Eleven- 0B
Twelve- 0C
Thirteen- 0D
Fourteen- 0E
Fifteen- 0F
Sixteen- 10
Seventeen- 11

& so on ... till Two hundred and fifty five- 255

RGB- R,G,B contains 00 to FF seperately therefore pure Red colour is FF0000 with Red being FF (255) and rest colors zero. 

In memory these numbers like sixteen is denoted as 1x0 instead of 10, so as not to create confusion between one zero and ten. 

*/

#include<stdio.h>

int main()
{
    int n=50;
    printf("%p\n", &n); // %p will allow you to print the address of variable if you additionally tell C, to get the address of n by putting ampersand before n.
}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 1.c
./a.exe

*/