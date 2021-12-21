#in this program we are going to learn about recursion (recursive function)

def factorial_iterative(n):
    '''factorial of any given no. n is  n! = n*(n-1)*(n-2)*....3*2*1'''
    fac = 1
    for i in range(n):
        fac = fac*(i+1)
    return fac
n = int(input("Enter the number to find the factorial of >--> "))
print("The factorial of the no by iterative method is:- ", factorial_iterative(n))

def factorial_recursive(n):
    if n==1:
        return 1
    else:
        return n*factorial_recursive(n-1)
print("The factorial of the no by recursive method is >--> ", factorial_iterative(n))

def fibonacchi(n):
    ''' 0, 1, 1, 2, 3, 5, 8, 13.... '''
    if n==1:
        return 0
    elif n==2:
        return 1
    else:
        return fibonacchi(n-2) + fibonacchi(n-1)

print(fibonacchi.__doc__)
fib_no = int(input("At which index do you want the Fibonacchi number "))
print("The fibonacchi number at index", fib_no, "is", fibonacchi(fib_no))