"""
---------------------------------  Practice Problem 1 (Easy)  --------------------------

Problem Statement:-
  Take age or year of birth as an input from the user. Store the input in one variable.
  Your program should detect whether the entered input is age or year of birth and tell 
  the user when they will turn 100 years old. (5 points).

Here are a few instructions that you must have to follow:

1.Do not use any type of module like DateTime or date utils.                                                >-->> (-5 points)
2.Users can optionally provide a year, and your program must tell their age in that particular year.        >-->> (3points)
3.Your code should handle all sorts of errors like :                                                        >-->> (2 points)
    ->You are not yet born
    ->You seem to be the oldest person alive
    ->You can also handle any other errors, if possible!
"""

print("     Hello, Welcome to our age detection program\n")
print("Enter your age or year of birth")
age_or_year = int(input())
while(True):
    print("Press:\n1.Casual\n2.Get your age")
    print("(you can quit the program by pressing 'q')")
    enter = input()
    print("\n")
    if(enter == '1'):
        if(age_or_year > 1900 and age_or_year < 2021):
            print("Your present age is ", ( 2021 - age_or_year))
            print("You will turn Hundred at ", (age_or_year + 100),'\n')
        elif(age_or_year < 120 and age_or_year > 0):
            print("You will turn Hundred at ", ((2021 - age_or_year) +100),'\n')
        elif(age_or_year > 2021 or age_or_year < 0):
            print("You are not born yet\n")
        elif(age_or_year < 1910 and age_or_year > 120):
            print("Your present age is ", ( 2021 - age_or_year))
            print("You seem to be the oldest person alive\n")

    elif(enter == '2'):
        get_age = int(input("For which year do you want get the age... "))
        if(get_age > age_or_year):
            print(f"Your age at {get_age} will be ", (get_age - age_or_year))
        else:
            print("You are not yet born")

    elif(enter == 'q'):
        quit()

    else:
        print("Enter a valid Input")
