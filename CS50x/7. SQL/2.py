'''

> Date Created: December 26, 2023
> Author: Ishaan Rastogi
> Purpose: To know how many people like Scratch, C and Python
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

'''

import csv #importing csv library

with open(r"G:\My Drive\CS 100\GitHub\CS50x\7. SQL\favorite.xlsx.csv", "r") as file: #opening file in read mode ; when using with open, you don't need to close the file using a different command line
    reader = csv.reader(file) # reading the file
    next(reader) #to skip header

    scratch, C, python = 0, 0, 0
    for row in reader:
        if row[0] == "Scratch":
            scratch += 1
        elif row[0] == "C":
            C += 1
        elif row[0] == "Python":
            python += 1
        else:
            print('Value Not Found!')

print(f'Scratch: {scratch}')
print(f'C: {C}')
print(f'Python: {python}')

'''
Ctrl + Shift + `
Terminal Code Loading...

python 2.py
'''