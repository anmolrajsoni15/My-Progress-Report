"""
--------------------------------------  Practice Problem 3 (Easy)  ----------------------------

Problem Statement:-
  You visited a restaurant called CodeWithHarry, and the food items in that 
  restaurant are sorted, based on their amount of calories. You have to reserve 
  this list of food items containing calories.

You have to use the following three methods to reserve a list:
    ->Inbuild method of python
    ->List name [::-1] slicing trick
    ->Swap the first element with the last one and second element with second last one and so on like,
      [6 7 8 34 5] -> [5 34 8 7 6]

Input:
  > Take a list as an input from the user
    [5, 4, 1]

Output:
[1, 4, 5]

[1, 4, 5]

[1, 4, 5]

All three methods give the same results!

"""


foods = int(input("How many food items do you want to add in your menu ?\n"))
print("Enter the food items...")
lst = []
for i in range (foods):
    items = input()
    lst.append(items)

print("\nFood items present in our resturant")
for items in lst:
    print(f" > {items}")

lst1 = lst[:]
lst1.reverse()
print(lst1)
lst2 = lst[::-1]
print(lst2)
for i in range(len(lst)//2):
    lst[i],lst[len(lst)-i-1] = lst[len(lst)-i-1],lst[i]

lst3 = lst
print(lst3)
if(lst1 == lst2 == lst3):
    print("All are reversed")