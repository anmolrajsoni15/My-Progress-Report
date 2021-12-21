"""
--------------------------  Practice Problem 2 (Easy)  -------------------------

Problem Statement:-
  Harry Potter has got the “n” number of apples. Harry has some students among whom he 
  wants to distribute the apples. These “n” number of apples is provided to harry by his 
  friends, and he can request for few more or a few less apples.

You need to print whether a number is in range mn to mx, is a divisor of “n” or not.


Input:
    ->Take input n, mn, and mx from the user.

Output:
    ->Print whether the numbers between mn and mx are divisors of “n” or not. If mn=mx, 
    show that this is not a range, and mn is equal to mx. Show the result for that number.

Example:
    If n is 20 and mn=2 and mx=5

    2 is a divisor of20
    3 is not a divisor of 20
    ...
    ...
    5 is a divisor of 20
"""

try:
    n = int(input("How much apple does Harry got by his friend ? \n"))
    mn = int(input("Minimum apple Harry need to distribute among his students are :- "))
    mx = int(input("Maximum apple Harry need to distribute among his students are :- "))

    if mn == mx :
        print("This is not a range")
        if(n % mn == 0):
            print(f"{mn} is divisor of {n}")
        else:
            print(f"{mn} is not a divisor of {n}")

    elif(mx > mn):
        for i in range(mn, mx+1):
            if(n % i == 0):
                print(f"{i} is divisor of {n}")
            else:
                print(f"{i} is not a divisor of {n}")

    else:
        print("There is some error in your input. Please, check and try again")
except:
    print("Enter integers only....")

