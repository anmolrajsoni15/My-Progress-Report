# #FOR LOOPS IN PYTHON.....

# list1 = ["Anmol", "Aryan", 57, 93, 29.38, 'C']
# for item in list1:
#     print(item, end=", ")
# print("\n")
# # print(*list1)
# # print("\t")

# list2 = [29, int, float, 30, 71,2, 3, 7, 10]
# for item in list2:
#     if str(item).isnumeric() and item>= 7:
#         print(item, end=", ")
# print("\n")

# #WHILE LOOP IN PYTHON....
# i = 0
# while (i<10):
#     print(i, end="_");
#     i = i+1

# from typing import no_type_check_decorator


print("\n                               LET'S BEGIN THE GAME \n")
print("In this game you have to guess a number. You will get only 9 chances to guess a number")
n = 18
no_of_guess = 1
number = int(input("Enter the no\n"))
while(no_of_guess < 9):
    if(number < 18):
         number = int(input("You guessed a smaller number. Please try again\n"))
         no_of_guess = no_of_guess + 1
    elif(number > 18):
         number = int(input("You guessed a larger number. Please try again\n"))
         no_of_guess = no_of_guess + 1
    else:
        print("You won the game")
        break

if(no_of_guess > 9):
    print("Better luck next time")


