#In this program we are going to build a simple game on 'Stone Paper Scissor'
import random
print("                    STONE-PAPER-SCISSOR")
print("                         (by Anmol)")
choosenum = ["Stone","Paper","Scissor"]
computer = random.choice(choosenum)
chances = 10
computer_score = 0
human_score = 0

while(chances):
    human = input("Choose Stone, Paper, Scissor\n")
    print("   You : ", human)
    print("   Computer : ", computer)
    if human == computer:
        print("Tie, try again")
        computer_score += 1
        human_score += 1
        print("chances left", chances-1)
        print("\n")
    elif human == "Stone":
        if computer == "Paper":
            print("Computer wins. Try again")
            computer_score += 5
            human_score += 0
        else:
            print("Congrats, You Win")
            computer_score += 0
            human_score += 5
        print("chances left", chances-1)
        print("\n")
    elif human == "Paper":
        if computer == "Scissor":
            print("Computer wins. Try again")
            computer_score += 5
            human_score += 0
        else:
            print("Congrats, You Win")
            computer_score += 0
            human_score += 5
        print("chances left", chances-1)
        print("\n")        
    elif human == "Scissor":
        if computer == "Stone":
            print("Computer wins. Try again")
            computer_score += 5
            human_score += 0
        else:
            print("Congrats, You Win")
            computer_score += 0
            human_score += 5
        print("chances left", chances-1)
        print("\n")
    else:
        print("Type Properly")
    computer = random.choice(choosenum)
    chances = chances-1
print("Computer Score is:- ", computer_score)
print("Your score is :-", human_score)

if computer_score == human_score:
    print("Match DRAW")
elif computer_score > human_score:
    print("Computer WINS the game")
else:
    print("You WON the game")

        


