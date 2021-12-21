#include<stdio.h>

void printData(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int* A, int n){
    int temp;
    int isSortted = 0;
    for (int i = 0; i < n-1; i++)
    {
        printf("Working on pass no. %d\n", i+1);
        isSortted = 1;
        for (int j = 0; j < n-1-i; j++)
        {
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSortted = 0;
            }
        }
        if(isSortted){
            return;
        }
    }
    
}
int main(){
    int A[] = {23, 73, 4, 55, 6, 79, 8, 9};
    int size = 8;
    printData(A, size);
    bubbleSort(A, size);
    printData(A, size);
return 0;
}