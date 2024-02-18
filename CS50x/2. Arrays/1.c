/*

This note will be available only on first file of each folder present in folder C Lang.
Documentation aka basic notes on how to run the code is already kept in each file for each programme using (/*) or //.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in C Language.
Author has made these programmes as a reference using courses of Apna College & Harvard, while himself learning C Language for the first time.

/*
> Date Created: July 18 & 19, 2023
> Author: Ishaan Rastogi
> Purpose: To learn basics and how to debug code
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working {It will certain print 4 # because of the bug} but the debugging is 0% working

*/

/*

There are 4 steps of compiling:
 1. Preprocessing
 2. Compiling
 3. Assembling
 4. Linking

1st step Preprocessing- 

#include <stdio.h> - Line from where our whole basic C code starts, here this # symbol is called preprocessor directive. Everything with the # symbol here, should be preprocessed that is, analyzed initially before anything else happens.

string get_string(string prompt); - This is how a function is declared i.e., it is decreed to exist. It is also called function's prototype. Remember in the recently done programes in C Language Folder, we made a function and copied and pasted its first line at the top above the including stdio.h command.

The material under curly paranthesis is its argument. Here argument is a prompt that the human sees when you use getString. For eg- Like we earlier asked from user in latter programs in C Language folder- "What's your name?"

2nd step Compiling-

Step 2 of compiling is just confusingly called compiling, where compiler changes the code by written by us to an assembly code. It is a lot less user friendly, even Prof. David Malan from harvard said that even I didn't have pretty good images about this language. This is a more like the language now computers do understand, like half-way in our world and half-way in binary world. And if I will show you the image by adding it's snipshot in the folder you will be horrified on seeing this if you to write such a code. That's why only a few people do that in the world because of the higher specific level need. This it the language which CPU understands.

3rd step Assembling- So when the compiler, it converts the assembly code to machine code ( binary code (zeroes and ones) )

4th step Linking- In the above machine code are our lines of cody only. But what about CS50's lines of codethat we wrote to implement getString? What about the lines of code that humans wrote decades ago to implement printf? All of those zeroes and ones are combined together with the latter machine code by linking our code to CS50's & with std.io's code all together by this process of linking. 

<-------------------------------------------------------------------------------------------------------------------------------------->

Debugging Tools-

1. printf can show what is printing and if it is printing wrong then you can correct the code
2. Debugger - Function + F5 key ( Via VS Code)
If you want to tell the debugger to stop running your code at a certain point, then you have to hover your mouse arrow to the side of numbers of lines and then click the red dot, if the dot get brighter then the breakpoint is activated.
And the step 2 is debug50 ./filename if and only if you have inserted cs50.h file and mind it here we are not using debugger in build in VS Code but rather than we are using the one created by Harvard, because it removes all the messiness and disadvantages of using the in built debugger.

3. Rubber duck - Talking to rubber duck, hopefully expressing yourself literally verbally, you probably will hear with non-zero probability like some illogic in your statement. And just by sounding things out, you'll realise like, "Oh, that's my problem." It has even a wikipidea page called rubber duck debugging. This also known as rubberducking.

<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~>

So now we will be copying a certain program from our last folder pset1 in folder c lang where we created mario blocks of height 3. But here we have changed it to a certain bug which you may find.

So we write the code with the bug, setup the breakpoint at the printf statement and run the command: debug50 ./filename

*/

#include<stdio.h>
#include"cs50.h"

int main() {

    for (int i = 0; i <= 3; i++)
    {
        printf("#\n");
    }

}

/* 

Ctrl + Shift + `

Terminal Code Loading...

gcc 1.c -o 1 cs50.c
./1

NOTE- Whenever you are using cs50 functions like get_string, make sure to follow the YouTube video named 'how to use cs50 library in vscode' till
the end, uploaded by a channel named Mahmoud Saad in the year 2022. Don't miss any single second.

*/