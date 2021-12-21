#include<iostream>
using namespace std;

int sum(int, int);

int main(){
  int num1, num2;
  cout<<"Enter the value of num1\n";
  cin>>num1;
  cout<<"Enter the value of num2\n";
  cin>>num2;
  cout<<"The sum of num1 and num2 is:-"<<sum(num1, num2);
 return 0;
}

int sum(int a, int b){
    int c= a+b;
    return c;
}