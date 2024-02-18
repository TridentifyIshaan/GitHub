'''
> Date Created: December 25, 2023
> Author: Ishaan Rastogi
> Purpose: To rebuild mario blocks as we did in C
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

Topic- User Defined Functions

'''

#vertical block
n = int(input("Enter a number:")) #asking integer from user

for i in range(n):
    print("#")

#horizontal block
m = int(input("Enter a number:")) #asking integer from user

for j in range(m):
    print("?", end='') #end='' is used to remove end line character since '' denotes empty as there is nothing between the single inverted commas
print("") #to print a newline to tidy up the work, make sure the command is intended outside the for loop

#Shortest method using multiplication operator
p = int(input("Enter a number:")) #asking integer from user
print("?" * p)

'''
Ctrl + Shift + `
Terminal Code Loading...

python 13.py
'''