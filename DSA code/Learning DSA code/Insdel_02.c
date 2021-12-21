#include <stdio.h>

//code for traversal
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//code for insertion by shifting
int indInsertion(int arr[], int size, int element, int c, int index)
{
    if (size >= c)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
    return 1;
}

//code for insertion directly
int directInsertion(int arr[], int size, int element, int c, int index)
{
    if (size >= c)
    {
        return -1;
    }
    else
    {
        arr[size] = arr[index];
        arr[index] = element;
    }
    return 1;
}

//code for deletion of an index
void indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {23, 34, 67, 84, 99};
    int size = 5, element = 45, index = 2;
    display(arr, size);
    printf("\n");

    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    printf("\n");

    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    printf("\n");

    directInsertion(arr, size, element = 50, 100, index);
    size += 1;
    display(arr, size);

    return 0;
}

/* Same code is applicable for c++ */