#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct Stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct Stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

void Push(struct Stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow \n");
    }
    ptr->top++;
    ptr->arr[ptr->top] = val;   
}

int Pop(struct Stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow \n");
        return -1;
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

int Peek(struct Stack* ptr, int index){
    int intVal = ptr->top -index+1;
    if(intVal < 0){
        printf("Invalid request");
        return -1;
    }
    else
    return ptr->arr[intVal];
}

int main(){
    struct Stack *S = (struct Stack *)malloc(sizeof(struct Stack));
    S->size = 6;
    S->top = -1;
    S->arr = (int*)malloc(S->size * sizeof(int));

    Push(S, 48);
    Push(S, 6);
    Push(S, 97);
    Push(S, 23);
    Push(S, 80);
    Push(S, 4);
    // Push(S, 47);
    
    printf("The poped value is %d \n", Pop(S));
    printf("The poped value is %d \n", Pop(S));
    // printf("The poped value is %d \n", Pop(S));
    // printf("The poped value is %d \n", Pop(S));
    // printf("The poped value is %d \n", Pop(S));
    // printf("The poped value is %d \n", Pop(S));
    // printf("The poped value is %d \n", Pop(S));

    printf("the value at position 2 is %d ",Peek(S, 2));
return 0;
}