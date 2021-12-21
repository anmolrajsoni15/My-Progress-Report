#include<iostream>
using namespace std;

int factorial(int a){
    if(a<=1){
        return 1;
    }
  return a* factorial(a-1);
}

 int fib(int b){
     if(b<2){
         return 1;
     }
     return fib(b-2)+ fib(b-1);
 }


int main(){
  int n;
   cout<<"Enter the number to find fibonacchi of "<<endl;
   cin>>n;
//   cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
  cout<<"The fibonacchi at position "<<n<<" is "<<fib(n);
 return 0;
}