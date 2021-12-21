//finding square root using binary search
#include<iostream>
using namespace std;

class FindSquareRoot{
    public:
        int Perfect_squareRoot(int n){
        int s = 0;
        int e = n;
        int mid = s+(e-s)/2;
        int ans = -1;
        while (s<=e)        
        {
            int sq = mid*mid;   
            if(sq == n){
                return mid;
            }
            else if(sq > n){
                e = mid-1;
            }
            else if(sq < n){
                ans = mid;
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

    double SquareRoot(int n, int precision){

        double factor = 1;
        double ans = Perfect_squareRoot(n);
        for (int i = 0; i < precision; i++)
        {
            factor = factor/10;
            for (double j = ans; j*j < n; j+=factor)
            {
                ans = j;
            }
        }
        return ans;
    }
};

int main(){
    int n;
    cout<<"Enter the number to get square root of ";
    cin>>n;
    FindSquareRoot sq;
    // cout<<sq.Perfect_squareRoot(n);
    cout<<"The square of "<<n<<" is "<<sq.SquareRoot(n, 4);
 return 0;
}   