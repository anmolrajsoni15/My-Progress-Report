#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node *Push(struct Node *top, int value)
{
    if (isFull(top))
    {
        printf("Stack Overflown");
    }
    else
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        p->data = value;
        p->next = top;
        top = p;
        return top;
    }
}

int Pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflown");
    }
    else
    {
        struct Node *q = *top;
        *top = (*top)->next;
        int val = q->data;
        free(q);
        return val;
    }
}

int Peek(struct Node *top, int pos)
{
    struct Node *ptr = top;
    for (int i = 0; i < (pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    return -1;
}

int main()
{
    struct Node *top = NULL;
    top = Push(top, 46);
    top = Push(top, 6);
    top = Push(top, 4);
    top = Push(top, 38);
    Traversal(top);

    printf("The poped value is %d\n\n", Pop(&top));
    Traversal(top);

    printf("\nThe value at position 2 is %d", Peek(top, 2));
    return 0;
}