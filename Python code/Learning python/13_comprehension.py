lst = []
my_dict = {1:'1. List comprehension', 2:'2. Dictonary comprehension', 3:'3. Set comprehension'}
number = int(input("How many inputs do you want to enter > "))
print("Enter the items")
for i in range(number):
    items = input()
    lst.append(items)
while(True):
    print("\nWhich type of comprehension do you want to see")
    for key,value in my_dict.items():
        print(my_dict[key])
    put = int(input())

    if put == 1:
        ls = [i for i in lst]
        print(ls)
    elif put == 2:
        dict = {i+1:lst[i] for i in range(len(lst))}
        print(dict)
        print(type(dict))
    elif put == 3:
        st = {j for j in lst}
        print(st)

    take = input()
    if take == '':
        continue
    elif take == 'q':
        quit()
        



