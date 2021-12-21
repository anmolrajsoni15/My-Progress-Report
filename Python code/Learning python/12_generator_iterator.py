from os import name


def gen_fibonacchi(n):
    f = [0, 1]
    for i in range(n):
        if i<=1:
            yield f[i]
        else:
            f.append(f[i-1]+f[i-2])
            yield f[i]

g = gen_fibonacchi(6)
for item in range(6):
    print(g.__next__())

name = "Anmol Raj Soni"
it = iter(name)
for i in range(len(name)):
    print(it.__next__(), end="")