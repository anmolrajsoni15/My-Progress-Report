#include<stdio.h>

void printData(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void InsertionSort(int* A, int n){
    int key, j;
    for (int i = 1 ; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        while(j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = {23, 73, 4, 55, 6, 79, 8, 9};
    int size = 8;
    printData(A, size);
    InsertionSort(A, size);
    printData(A, size);
return 0;
}