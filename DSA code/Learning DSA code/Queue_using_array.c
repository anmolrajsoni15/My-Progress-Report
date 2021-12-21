#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int front;
    int back;
    int size;
    int* arr;
};

int isFull(struct Queue* ptr){
    if(ptr->back == ptr->size-1){
        return 1;
    }
    else return 0;
}

int isEmpty(struct Queue* ptr){
    if(ptr->front == ptr->back){
        return 1;
    }
    else return 0;
}

void enQueue(struct Queue* q, int val){
    if(isFull(q)){
        printf("The Queue is full");
    }
    else{
        q->back++;
        q->arr[q->back] = val;
        printf("The Enqueued element is %d\n", val);
    }
}

int deQueue(struct Queue* q){
    int a = -1;
    if(isEmpty(q)){
        printf("The Queue is Empty\n");
    }
    else{
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

int main(){
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->size = 5;
    q->front = q->back = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enQueue(q, 48);
    enQueue(q, 9);
    enQueue(q, 19);
    enQueue(q, 37);
    enQueue(q, 8);
    enQueue(q, 3);
    printf("\n");
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));

return 0;
}