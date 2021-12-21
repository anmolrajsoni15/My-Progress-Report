#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int sumRealcomplex(complex, complex);
    int sumImgcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);
    friend class calculator;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum()
    {
        cout << "The complex number is " << a << " + " << b << 'i' << endl;
    }
};

int calculator::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumImgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    calculator calc;
    c1.setNum(2, 3);
    c1.printNum();

    c2.setNum(7, 9);
    c2.printNum();
    cout << "The sum of Real parts is " << calc.sumRealcomplex(c1, c2) << endl;
    cout << "The sum of Imaginary parts is " << calc.sumImgcomplex(c1, c2) << endl;

    sum = sumcomplex(c1, c2);
    sum.printNum();
    return 0;
}