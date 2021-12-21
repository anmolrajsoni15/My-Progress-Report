//pattern part 3
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout<<char(ch+(i+j-2))<<' ';
        }
        ch++;
        cout<<endl;
    }
    
        char cha = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<cha;
        }
            cha++;
        cout<<endl;
    }
    


 return 0;
}