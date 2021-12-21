//binary search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    int low = 0;
    int high = size - 1;
    int mid = low + (high-low)/2;

    while(low <= high){
        if(arr[mid] == element){
            return mid;
        }
        if(element > arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

        mid = low + (high-low)/2;
    }
    return -1;
}

int main(){
    int arr[] = {2, 3, 5, 6, 9, 18, 34, 59};
    cout<<binarySearch(arr, 8, 5);
 return 0;
}