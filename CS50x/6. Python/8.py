'''
> Date Created: October 16, 2023
> Author: Ishaan Rastogi
> Purpose: To lower the case of input in 6.py & 7.py so that if user enters strings with with different case characters, the programme does work properly.
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

TOPIC- Object Oriented Programming (OOP)

Python supports OOP which basically means the feature of in-built functions in the Python while variables are passed into them.
So OOP is a technique whereby certain types of values like a string AKA str- not only have the properties inside of them- attributes, just like a struct in C but your data can also have functions built in them.

'''

s = input("Do you agree? ")
if s.lower() in ["y" , "yes"]:
    print("Agreed")
elif s.lower() in ["n" , "no"]:
    print("Not agreed")

'''
Ctrl + Shift + `
Terminal Code Loading...

python 8.py
'''