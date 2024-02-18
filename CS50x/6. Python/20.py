'''
> Date Created: December 25, 2023
> Author: Ishaan Rastogi
> Purpose: To create a phonebook
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

Topic- Dictionary [Key-Value]

'''

import sys

people = {
    'Carter': '9876543210',
    'David': '0123456789',

}

name = input('Name: ')
if name in people:
    number = people[name]
    print(f'Number: {number}')

'''
Ctrl + Shift + `
Terminal Code Loading...

python 20.py

'''