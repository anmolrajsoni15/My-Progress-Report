#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void printData(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
    printf("\n");
}

int maxterm(int* A, int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}

void CountSort(int* A, int n){
    int i, j;
    int max = maxterm(A, n);
    int* counter = (int*)malloc((max+1)*sizeof(int));
    for ( i = 0; i < max+1; i++)
    {
        counter[i] = 0;
    }
    for ( i = 0; i < n; i++)
    {
        counter[A[i]]++;
    }
    i = 0; j = 0;
    while (i<=max)
    {
        if(counter[i]>0){
            A[j] = i;
            counter[i]--;
            j++;
        }
        else{
            i++;
        }
    }
    free(counter);
}

int main(){
    int A[] = {23, 73, 4, 55, 6, 79, 8, 9};
    int size = 8;
    printf("The array is:- ");
    printData(A, size);
    CountSort(A, 8);
    printf("The sorted array is:- ");
    printData(A, size);

return 0;
}