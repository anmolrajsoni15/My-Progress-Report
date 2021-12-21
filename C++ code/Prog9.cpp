#include<iostream>
using namespace std;

int main(){
    int s=0;
    int ar[4];
    ar[0]= 1; ar[1]= 2; ar[2]= 3; ar[3]=4;
    for (int i=0; i<4; i++) {
    s = s + ar[i];
    }
    cout<<s;
    return 0;
}
