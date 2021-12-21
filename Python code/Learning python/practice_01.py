print("           STAR PATTERNS\n")
no_of_rows = int(input("Enter the number of rows you want to see "))
new = int(input("Press 1 for increasing oder and press 0 for reverse order "))
print("\n")
stars = bool(new)
if stars is True:
    for i in range(1, no_of_rows+1):
        print("* "*i)
elif stars is False:
    for j in range(no_of_rows, 0, -1):
        print("* "*j)

# print("   "*5, "*")