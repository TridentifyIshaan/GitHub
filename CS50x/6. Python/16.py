'''
> Date Created: December 25, 2023
> Author: Ishaan Rastogi
> Purpose: To write command line arguements
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

Topic- System Library Functions 

'''

from sys import argv

if len(argv) == 2:
    print(f'Hello, {argv[1]}')
else:
    print('Hello, world')

'''
Ctrl + Shift + `
Terminal Code Loading...

python 16.py Ishaan

'''