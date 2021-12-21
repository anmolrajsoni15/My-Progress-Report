#include<iostream>
using namespace std;

int main(){
   int arr[] = {2, 3, 4, 6, 8};
   for (int i = 0; i < 5; i+=2)
   {    if(i+1 < 5)
        swap(arr[i], arr[i+1]);
        // cout<<arr[i]<<" ";
   }
   for (int i = 0; i < 5; i++)
   {
    //    swap(arr[i], arr[i+1]);
        cout<<arr[i]<<" ";
   }
   
 return 0;
}