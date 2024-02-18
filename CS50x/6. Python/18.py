'''
> Date Created: December 25, 2023
> Author: Ishaan Rastogi
> Purpose: Better way to write 16.py
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

Topic- System Library Functions 

'''

import sys #Importing whole sys library because we will be using more than 1 function from sys, although we could have imported those 2 functions from sys

if len(sys.argv) != 2:
    print('Missing command-line argument!')
    sys.exit(1)

print(f'Hello, {sys.argv[1]}')
sys.exit(0)

'''
Ctrl + Shift + `
Terminal Code Loading...

python 18.py
python 18.py Ishaan

'''