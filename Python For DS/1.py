'''

This note will be available only on first file of each folder present in folder Python For DS.
Documentation aka basic notes on how to run the code is already kept in each file for each programme using triple '.
Wherever author needs it to be inserted, he has inserted. So that people using these files can learn easily how to code in Python Language for Data
Science. Author has made these programmes as a reference using courses of Freecodecamp, while himself re-learning Python Language.

> Date Created: Mar 20, 2024
> Author: Ishaan Rastogi
> Purpose: 'Finding Minimum Number via Selection Sort' showcase
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working ( No Output will come )

'''

def searchMinFromList(L,n):
    minValue = L[0]
    counter = 1
    while (counter <= n):
        v = L[counter]
        if ( v < minValue ):
            minValue = v
            idx = counter
        else:
            pass
        counter += 1
    return minValue, idx
        

def SortList(L,n):
    L2=[]
    counter = 0
    while ( counter < n ):
        min, idx = searchMinFromList(L,n)
        L2.append(min)
        del L[idx]
        n =- 1
    return L2

'''
Ctrl + Shift + `
Terminal Code Loading...

python 1.py
'''