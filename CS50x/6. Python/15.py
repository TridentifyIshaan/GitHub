'''
> Date Created: December 25, 2023
> Author: Ishaan Rastogi
> Purpose: To store scores
> Operating System: This is only for Windows OS, it may or may not work on other OS
> Program Status: 100% Working 
'''

'''

Topic- List, Tuple, Range

'''

# If the scores are to inputed manually in the code: scores = [72, 73, 33]

#If the scores are to be user input
scores=[] #empty list which is yet to be filled

for i in range(3):
    int = int(input('Score: '))
    scores.append(int) #append function- add at the end

    '''
    Another way- scores += [int]
    This is concatenation & int is put in rectangular brackets so that it is treated as a string
    '''

average = sum(scores) / len(scores)
print(f"Average: {average}") #formatted string, LEARN THIS

#Similarly, functions like upper and lower to change the case of the string can be used like this

'''
Ctrl + Shift + `
Terminal Code Loading...

python 15.py
'''