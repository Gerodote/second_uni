import random as rnd

# rock paper scissors iteration function
def iteration(val: int):
    '''
        0 is rock
        1 is paper
        2 is scissors
    '''
    if not (0 <= val ) or not (val <= 2):
        raise ValueError("its not a valid value")
    program_value = rnd.randrange(0,2)
    if val == program_value:
        return "draw"
    elif( val == 0 and program_value == 1) or (val == 1 and program_value == 2) or (val == 2 and program_value == 0):
        return "I won"
    else:
        return "You won"
    
print("It's a rock, paper, scissors game!")

res = ""
res = input("Enter your choice: Rock = 0, Paper = 1, Scissors = 2 : \n")
while (res != "exit()"):
    try:
        result = iteration(int(res))
    except ValueError as e:
        print("Maybe you entered not a number, try again. Error is: ")
        print(e)
    else:
        print(result)
    res = input("Rock = 0, Paper = 1, Scissors = 2.\n")
