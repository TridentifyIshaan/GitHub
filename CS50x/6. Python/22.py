'''
> Date Created: December 25, 2023
> Author: Ishaan Rastogi
> Purpose: Improved version of 20.py
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

Topic- CSV Library

'''

import csv

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