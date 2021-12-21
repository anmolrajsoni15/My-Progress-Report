#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base = 1;
    virtual void display(){ //to access this display() remove the virtual keyword
        cout<<"1 Displaying Base class varialble var_base "<<var_base<<endl;
    }
};

class DerivedClass:public BaseClass{
    public:
    int var_derived = 2;
    void display(){ //to access this display put virtual keyword before the display() of base class
        cout<<"2 Displaying Base class varialble var_base "<<var_base<<endl;
        cout<<"2 Displaying Derived class variable var_derived "<<var_derived<<endl;
    }
};

int main(){
 BaseClass *bptr;
 BaseClass obj_base;
 DerivedClass obj_derived;
 bptr = &obj_derived;
 bptr->display();
 return 0;
}