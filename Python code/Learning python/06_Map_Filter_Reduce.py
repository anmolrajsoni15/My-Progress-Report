#----------MAP----------
items = [1, 2, 3, 4, 5]
a = list(map(lambda x: x**3, items))
print (a, "\n")

def square(a):
    return a*a

def cube(a):
    return a*a*a
func = [square, cube]

for i in range(5):
    mapp = list(map(lambda x:x(i), func))
    print(mapp)
print('\n')
#----------------------X--------------------X----------------------X----------------

# <----------FILTER------------>
list_1 = [1,2,4,7,2,8,4,90,54,86,34,1,5]

def is_greater_4(num):
    return num>4

is_greater_4 = list(filter(is_greater_4, list_1))
print(f"No. greater than 4 in the list is {is_greater_4}", '\n')
#---------------X------------------X---------------X--------------------X------------

#<-------------REDUCE------------->
from functools import reduce

l1 = [1,2,3,4,5,6,7,8,9,10]
num = reduce(lambda x,y:x+y, l1)
print(f"Sum of first 10 natural number is {num}")
