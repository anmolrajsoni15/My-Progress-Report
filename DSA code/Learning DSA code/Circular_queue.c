#include<stdio.h>
#include<stdlib.h>

struct CircularQueue{
    int front;
    int back;
    int size;
    int* arr;
};

int isFull(struct CircularQueue* ptr){
    if((ptr->back+1)%ptr->size == ptr->front){
        return 1;
    }
    else return 0;
}

int isEmpty(struct CircularQueue* ptr){
    if(ptr->back == ptr->front){
        return 1;
    }
    else return 0;
}

void enQueue(struct CircularQueue* q, int val){
    if(isFull(q)){
        printf("The CircularQueue is full");
    }
    else{
        q->back = (q->back+1)%q->size;
        q->arr[q->back] = val;
        printf("The Enqueued element is %d\n", val);
    }
}

int deQueue(struct CircularQueue* q){
    int a = -1;
    if(isEmpty(q)){
        printf("The Queue is Empty\n");
    }
    else{
        q->front = (q->front+1)%q->size;
        a = q->arr[q->front];
    }
    return a;
}

int main(){
    struct CircularQueue* q = (struct CircularQueue*)malloc(sizeof(struct CircularQueue));
    q->size = 5;
    q->front = 0;
    q->back = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enQueue(q, 48);
    enQueue(q, 9);
    enQueue(q, 19);
    enQueue(q, 37);

    printf("\n");
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));
    printf("Element Dequeued :- %d\n", deQueue(q));
    enQueue(q, 19);   
    enQueue(q, 37);

    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
    if(isFull(q)){
        printf("Queue is full\n");
    }
return 0;
}