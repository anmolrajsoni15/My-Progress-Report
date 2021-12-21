#include <stdio.h>

void printData(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
    printf("\n");
}

void merge(int *A, int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int r = low; r <= high; r++)
    {
        A[r] = B[r];
    }
}

void MergeSort(int *A, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
int main()
{
    int A[] = {23, 73, 4, 55, 6, 79, 8, 9};
    int size = 8;
    printf("The array is:- ");
    printData(A, size);
    MergeSort(A, 0, 7);
    printf("The sorted array is:- ");
    printData(A, size);
    return 0;
}