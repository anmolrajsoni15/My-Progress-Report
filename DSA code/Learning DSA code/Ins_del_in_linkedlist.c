#include<stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};

//code for traversal
void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->Next;
    }
    printf("\n");
}

//code for insertion at first index
struct Node *insert_at_start(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->Next = head;

    return ptr;
}

//code for insertion at between any index
struct Node *insert_at_index(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->Next;
        i++;
    }
    ptr->data = data;
    ptr->Next = p->Next;
    p->Next = ptr;
    return head;
}

//code for insertion at the end
struct Node *insert_at_end(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->Next != NULL)
    {
        p = p->Next;
    }
    ptr->data = data;
    p->Next = ptr;
    ptr->Next = NULL;

    return head;
}

//code for insertion at any given index
struct Node *insert_after_node(struct Node *head, struct Node *prevnode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->Next = prevnode->Next;
    prevnode->Next = ptr;

    return head;
}

//code for deletion of firsr node
struct Node *delete_at_start(struct Node *head)
{
    struct Node *ptr = head;
    head = head->Next;
    free(ptr);

    return head;
}

//code for deletion in between the nodes
struct Node *delete_at_index(struct Node *head, int index)
{
    struct Node *ptr = head;
    int i = 0;
    while (i != (index - 1))
    {
        ptr = ptr->Next;
        i++;
    }
    struct Node *q = ptr->Next;
    ptr->Next = q->Next;
    free(q);

    return head;
}

//code for deletion at end
struct Node *delete_at_end(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *q = head->Next;
    while (q->Next != NULL)
    {
        ptr = ptr->Next;
        q = q->Next;
    }
    ptr->Next = NULL;
    free(q);

    return head;
}

//code for deletion at given value
struct Node *delete_at_value(struct Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *q = head->Next;
    while (q->data != value && q->data != NULL)
    {
        ptr = ptr->Next;
        q = q->Next;
    }
    if (q->data == value)
    {
        ptr->Next = q->Next;
        free(q);
    }

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
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

    printf("Intially the elements are :- ");
    Traversal(head);
    printf("\n");

    printf("After inserting at begining, the elements are:- ");
    head = insert_at_start(head, 89);
    Traversal(head);
    printf("\n");

    printf("After deletion at begining, the elements are:- ");
    head = delete_at_start(head);
    Traversal(head);
    printf("\n");

    printf("After inserting at index %d, the elements are:- ", 2);
    head = insert_at_index(head, 46, 2);
    Traversal(head);
    printf("\n");

    printf("After deletion at index %d, the elements are:- ", 2);
    head = delete_at_index(head, 2);
    Traversal(head);
    printf("\n");

    printf("After inserting at end, the elements are:- ");
    head = insert_at_end(head, 60);
    Traversal(head);
    printf("\n");

    printf("After deletion at end, the elements are:- ");
    head = delete_at_end(head);
    Traversal(head);
    printf("\n");

    printf("After inserting at 2nd, the elements are:- ");
    head = insert_after_node(head, second, 47);
    Traversal(head);
    printf("\n");

    printf("After deletion at 2nd, the elements are:- ");
    head = delete_at_value(head, 47);
    Traversal(head);

    return 0;
}