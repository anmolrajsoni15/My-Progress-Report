#include <iostream>
using namespace std;

void linear_search(int arr[], int s, int x)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == x)
        {
            cout << "By Linear Search the value is found in index no:- " << i << endl;
        }
    }
}

void binary_search(int arr[], int size, int element)
{
    int low = 0;
    int mid;
    int high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            cout << "By Bineary Search the value is found in index no:- " << mid << endl;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (arr[mid] != element)
    {
        cout << "Element not found!" << endl;
    }
}

int main()
{
    int arr[100] = {2, 3, 13, 23, 45, 65, 92, 100};
    int size = 7;
    int element = 13;
    linear_search(arr, size, element);
    binary_search(arr, size, element);
    return 0;
}