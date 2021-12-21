//pattern part 4
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        int space = 1;
        while (space <= (n-i))
        {
            cout<<" ";
            space++;
        }

        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        
        int start = i-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
    }
    
 return 0;
}