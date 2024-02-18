'''

> Date Created: December 26, 2023
> Author: Ishaan Rastogi
> Purpose: To send list in sorted out manner by name
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

'''

import csv #importing csv library

with open(r"G:\My Drive\CS 100\GitHub\CS50x\7. SQL\favorite.xlsx.csv", "r") as file: #opening file in read mode ; when using with open, you don't need to close the file using a different command line
    reader = csv.reader(file) # reading the file
    next(reader) #to skip header

    count = {} # OR count = dict()
    for row in reader:
        l = row[0]
        if l in count:
            count[l] += 1
        else:
            count[l] = 1

for l in sorted(count): #sorted function
    print(f'{l}: {count[l]}')

'''
Ctrl + Shift + `
Terminal Code Loading...

python 4.py
'''