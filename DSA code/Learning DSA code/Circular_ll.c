//CIRCULAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};

void Traversal(struct Node* head){
    struct Node* ptr = head;
    do{
    printf("Element:- %d\n", ptr->data);
    ptr = ptr->Next;
    }while(ptr!=head);
}

struct Node* insert_at_begning(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head->Next;
    while(p->Next!=head){
        p = p->Next;
    }
    p->Next = ptr;
    ptr->Next = head;
    head = ptr;

    return head;
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
  fourth->Next = head;
  printf("Intially the elements are :- \n");
  Traversal(head);
  printf("\n");

  printf("After inserting at begining of circular node, the elements are:- \n");
    head = insert_at_begning(head, 89);
    Traversal(head);
    printf("\n");
return 0;
}