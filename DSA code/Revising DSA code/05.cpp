//dabbang pattern

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for (int i = 1; i <= 5; i++)
    {
        int j = 1;
        while (j<= (n-i+1))
        {
            cout<<j<<"  ";
            j++;
        }

        int start = (i-1);
        while (start)
        {
            cout<<'*'<<"  ";
            start--;
        }
        
        int start1 = (i-1);
        while (start1)
        {
            cout<<'*'<<"  ";
            start1--;
        }
        
        int start2 = (n-i+1);
        while(start2){
            cout<<start2<<"  ";
            start2--;
        }

        cout<<endl;
        cout<<endl;
    }
    

 return 0;
}