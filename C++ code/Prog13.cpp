#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int, int);

    complex(complex &C)
    {
        cout << "Copy Constructor is called" << endl;
        a = C.a;
        b = 0;
    }

    void printNum()
    {
        cout << "The complex number is " << a << " + " << b << 'i' << endl;
    }

    ~complex()
    {
        cout<<"!!! Destructor is being implimented !!!"<<endl;
    }
};

complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex c1(2);
    c1.printNum();

    complex c2(10, 10);
    c2.printNum();

    complex c3;
    c3.printNum();

    complex c4(c1);
    c4.printNum();

    return 0;
}