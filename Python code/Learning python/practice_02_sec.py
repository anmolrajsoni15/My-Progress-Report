#pro approach
client_list = {1: "Harry", 2: "Rohan", 3: "Hammad"}
lock_list = {1: "Exercise", 2: "Diet"}

def gettime():
    import datetime
    return datetime.datetime.now()

print("Enter the client name")
for key, value in client_list.items():
    print("Press ",key,"for",value)
input_data = int(input())

print("Selected client :- ", client_list[input_data], "\n")

print("Press 0 for log")
print("Press 1 for retrive")
choose = int(input("\n"))

if choose == 0:
    for key, value in lock_list.items():
        print("Choose",key,"for",value)
    input_lock = int(input("\n"))
    more = "yes"
    while(more != "no"):
        print("Enter", lock_list[input_lock])
        mytext = input("\n")
        if input_data == 1 and input_lock == 1:
            with open("Harry1_ex.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ mytext + "\n")
        elif input_data == 2 and input_lock == 1:
            with open("Rohan1_ex.txt", "a") as file:
                    file.write(str([str(gettime())])+ ": "+ mytext + "\n")
        elif input_data == 3 and input_lock == 1:
            with open("Hammad1_ex.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ mytext + "\n")
        elif input_data == 1 and input_lock == 2:
            with open("Harry1_food.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ mytext + "\n")
        elif input_data == 2 and input_lock == 2:
            with open("Rohan1_food.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ mytext + "\n")
        elif input_data == 3 and input_lock == 2:
            with open("Hammad1_food.txt", "a") as file:
                file.write(str([str(gettime())])+ ": "+ mytext + "\n")
        more = input("Add more ? yes/no ")
        continue

if choose == 1:
    for key, value in lock_list.items():
        print("Choose",key,"to retrive the",value)
    input_lock = int(input("\n"))

    if input_data == 1 and input_lock == 1:
        with open("Harry1_ex.txt") as file:
            print(file.read())
    elif input_data == 2 and input_lock == 1:
        with open("Rohan1_ex.txt") as file:
            print(file.read())
    elif input_data == 3 and input_lock == 1:
        with open("Hammad1_ex.txt") as file:
            print(file.read())
    elif input_data == 1 and input_lock == 2:
        with open("Harry1_food.txt") as file:
            print(file.read())
    elif input_data == 2 and input_lock == 2:
        with open("Rohan1_food.txt") as file:
            print(file.read())
    elif input_data == 3 and input_lock == 2:
        with open("Hammad1_food.txt") as file:
            print(file.read())

# except Exception as e:
#     print("Person not found")
# try: