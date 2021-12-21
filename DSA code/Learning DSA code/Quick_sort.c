#include<stdio.h>

void printData(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int Partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while(A[i] <= pivot){
            i++;
        }
        while(A[j] > pivot){
            j--;
        }
        if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void QuickSort(int A[], int low, int high){
    int partitionIndex;
    if(low < high){
        partitionIndex = Partition(A, low, high);
        QuickSort(A, low, partitionIndex-1);
        QuickSort(A, partitionIndex+1, high);
    }
}

int main(){
    int A[] = {23, 73, 4, 55, 6, 79, 8, 9};
    int size = 8;
    printData(A, size);
    QuickSort(A, 0, size-1);
    printData(A, size);
return 0;
}