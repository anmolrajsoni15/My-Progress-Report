#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* f = NULL;
struct node* r = NULL;

void Traversal(struct node* ptr){
    while(ptr != NULL){
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    if(n == NULL){
        printf("The Queue is full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f == NULL){
            f = r = n;
        }
        else{
            r->next = n;
            r = n;
        }
    }
}

int dequeue(){
    int val = -1;
    struct node* ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main(){
    printf("Element enqueued are:-\n");
    enqueue(20);
    enqueue(8);
    enqueue(39);
    enqueue(4);
    enqueue(2);
    Traversal(f);
    printf("\n");
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
return 0;
}