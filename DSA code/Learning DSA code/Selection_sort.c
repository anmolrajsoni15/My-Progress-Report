#include<stdio.h>

void printData(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int* A, int n){
    int minindex, temp;
    for (int i = 0; i < n-1; i++)
    {
        minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j]<A[minindex]){
                minindex = j;
            }
        }
        temp = A[i];
        A[i] = A[minindex];
        A[minindex] = temp;
    }
    
}
int main(){
    int A[] = {23, 73, 4, 55, 6, 79, 8, 9};
    int size = 8;
    printData(A, size);
    selectionSort(A, size);
    printData(A, size);
return 0;
}