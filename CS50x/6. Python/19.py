'''
> Date Created: December 25, 2023
> Author: Ishaan Rastogi
> Purpose: To create a name finder using system library
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

Topic- System Library Functions 

'''

import sys

names = ['Bill', 'Charlie', 'Fred', 'George', 'Ginny', 'Percy', 'Ron', ]

name = input('Person to find is: ')

if name in names:
    print('Found')
    sys.exit(0)
else:
    print("Not Found!")
    sys.exit(1)

'''
Ctrl + Shift + `
Terminal Code Loading...

python 19.py

'''