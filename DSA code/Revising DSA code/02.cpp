//star pattern part 2

#include<iostream>
using namespace std;

void method_2(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i+j-1;
        }
        cout<<endl;
    }
}

void method_1(int n){
    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (int j = 1; j <= i; j++)
        {
            cout<<val;
            val++;   
        }
        cout<<endl;
    }
}

//for reverse no pattern
void ultanumber(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i-j+1;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<endl;

    
    cout<<"From sidha"<<endl;
    method_1(n);
    cout<<endl;
    method_2(n);
    cout<<endl<<"From ulta"<<endl;
    ultanumber(n);
 return 0;
}

/*  1
    2 3
    3 4 5
    4 5 6 7
*/