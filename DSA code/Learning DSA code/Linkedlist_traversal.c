#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};

void Traversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("Element:- %d\n", ptr->data);
    ptr = ptr->Next;
    }
}
int main(){
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  head= (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  head->data = 67;
  head->Next = second;

  second->data = 84;
  second->Next = third;

  third->data = 27;
  third->Next = fourth;

  fourth->data = 49;
  fourth->Next = NULL;

  Traversal(head);
return 0;
}