#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n<0){
        return false;
    }

    int x=0;
    while(n!=0){
        if(n & 1){
            x++;
        }
        n = n>>1;
    }
    if(x == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n = -16;
    cout<<"hello";
    cout<<isPowerOfTwo(n);
 return 0;
}