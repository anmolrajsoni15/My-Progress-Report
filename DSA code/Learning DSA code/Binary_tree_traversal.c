#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* n;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void PreorderTraversal(struct Node* root){
    if(root!=NULL){
    printf("%d ", root->data);
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
    }
}

void PostorderTraversal(struct Node* root){
    if(root!=NULL){
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    printf("%d ", root->data);
    }
}

void InorderTraversal(struct Node* root){
    if(root!=NULL){
    InorderTraversal(root->left);
    printf("%d ", root->data);
    InorderTraversal(root->right);
    }
}

int main(){
    struct Node* p = createNode(4);
    struct Node* p1 = createNode(1);
    struct Node* p2 = createNode(6);
    struct Node* p3 = createNode(5);
    struct Node* p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("Pre order Traversal:- ");
    PreorderTraversal(p);
    printf("\n");
    printf("Post order Traversal:- ");
    PostorderTraversal(p);
    printf("\n");
    printf("In order Traversal:- ");
    InorderTraversal(p);
return 0;
}