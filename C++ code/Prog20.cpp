#include<iostream>
using namespace std;

template<class T1, class T2 = int, class T3 = int>
class myclass{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    myclass(T1 a, T2 b, T3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(){ 
        cout<<"The value of data1 using template T1 is "<<data1<<endl;
        cout<<"The value of data2 using template T2 is "<<data2<<endl;
        cout<<"The value of data3 using template T3 is "<<data3<<endl;
    }
};
int main(){
    myclass<int, float, char> mc(9, 5.4, 'c');
    mc.display();
 return 0;
}