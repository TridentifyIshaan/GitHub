'''
This note will be available only on first file of each folder present in folder SQL.
Documentation aka basic notes on how to run the code is already kept in each file for each programme using # or ("').
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in Python Language.
Author has made these programmes as a reference using courses of Harvard, although he has already learnt SQL in his schooling.
He is all set to revise his SQL basics and rebuild his coding skills in python and develop on them for future competency & industrial purposes.

NOTE- You need to download python & MySQL latest software from the online site respectively and install python extension from here to code in Python on VS Code

> Date Created: December 26, 2023
> Author: Ishaan Rastogi
> Purpose: To read a csv file
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 

'''

import csv #importing csv library

with open(r"G:\My Drive\CS 100\GitHub\CS50x\7. SQL\favorite.xlsx.csv", "r") as file: #opening file in read mode ; when using with open, you don't need to close the file using a different command line
    reader = csv.reader(file) # reading the file
    next(reader) #to skip header
    for row in reader:
        print(row[0]) #printing elements of first row

'''
Ctrl + Shift + `
Terminal Code Loading...

python 1.py
'''