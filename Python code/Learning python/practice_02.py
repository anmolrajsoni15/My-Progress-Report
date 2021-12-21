#program for beginners
def gettime():
    import datetime
    return datetime.datetime.now()

def take_details(client):
    if client == "Harry":
        take = int(input("Type 1 to enter exercise and type 2 to enter diet :- "))
        if take == 1:
            exercise = input("Which exercise you did :- ")
            with open("Harry_ex.txt", "a") as file:
                file.write(str([str(gettime())])+ ": " + exercise +"\n")
        elif take == 2:
            food = input("Enter the food you eat :- ")
            with open("Harry_food.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ food + "\n")

    elif client == "Rohan":
        take = int(input("Type 1 to enter exercise and type 2 to enter diet :- "))
        if take == 1:
            exercise = input("Which exercise you did :- ")
            with open("Rohan_ex.txt", "a") as file:
                file.write(str([str(gettime())])+ ": " + exercise +"\n")
        elif take == 2:
            food = input("Enter the food you eat :- ")
            with open("Rohan_food.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ food + "\n")

    elif client == "Hammad":
        take = int(input("Type 1 to enter exercise and type 2 to enter diet :- "))
        if take == 1:
            exercise = input("Which exercise you did :- ")
            with open("Hammad_ex.txt", "a") as file:
                file.write(str([str(gettime())])+ ": " + exercise +"\n")
        elif take == 2:
            food = input("Enter the food you eat :- ")
            with open("Hammad_food.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ food + "\n")

def display_details(client):
    if client == "Harry":
        take = int(input("Type 1 to see the exercise and type 2 to see the food :- "))
        if take == 1:
            with open("Harry_ex.txt") as file:
                print(file.read())
        if take == 2:
            with open("Harry_food.txt") as file:
                print(file.read())        
    elif client == "Rohan":
        take = int(input("Type 1 to see the exercise and type 2 to see the food :- "))
        if take == 1:
            with open("Rohan_ex.txt") as file:
                print(file.read())
        if take == 2:
            with open("Rohan_food.txt") as file:
                print(file.read())        
    elif client == "Hammad":
        take = int(input("Type 1 to see the exercise and type 2 to see the food :- "))
        if take == 1:
            with open("Hammad_ex.txt") as file:
                print(file.read())
        if take == 2:
            with open("Hammad_food.txt") as file:
                print(file.read())
    else:
        print("The person is not found")

print("                HEALTH MANAGMENT SYSTEM\n")
input_choice = int(input("Press 0 to log the data and Press 1 to retrive the data :- "))
if input_choice == 0:
    client_name = input("What is your name ? ")
    take_details(client_name)
else:
    client_name = input("Whose data do you want to retrive ? ")
    display_details(client_name)



