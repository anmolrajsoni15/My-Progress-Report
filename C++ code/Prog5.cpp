#include<iostream>
using namespace std;

void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
}
void swappointer(int *a, int*b){
   int t=*a;
    *a=*b;
    *b=t; 
}
void swappointervar(int &a, int &b){
    int t=a;
    a=b;
    b=t;
}

int main(){
 int x=4, y=5;
 cout<<"The value of x is "<<x<<". The value of y is "<<y<<endl;
 swap(x,y);
//  swappointer(&x, &y);
//  cout<<"The value of x is "<<x<<" The value of y is "<<y<<endl;
  swappointervar(x, y);
  cout<<"The value of x is "<<x<<". The value of y is "<<y<<endl;
 return 0;
}