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

void InorderTraversal(struct Node* root){
    if(root!=NULL){
    InorderTraversal(root->left);
    printf("%d ", root->data);
    InorderTraversal(root->right);
    }
}

struct Node* searchBST(struct Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    else if(key > root->data){
        return searchBST(root->right, key);
    }
    else{
        return searchBST(root->left, key);
    }
}

struct Node* Iterative_searchBST(struct Node* root, int key){
    while (root!=NULL)
    {
        if(key == root->data){
            return root;
        }
        else if(key< root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

int main(){
    struct Node* p = createNode(5);
    struct Node* p1 = createNode(3);
    struct Node* p2 = createNode(6);
    struct Node* p3 = createNode(2);
    struct Node* p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("The BST is :- ");
    InorderTraversal(p);
    printf("\n");
    struct Node* n = searchBST(p, 6);
    if(n!=NULL){
        printf("The data is :- %d\n", n->data);
    }
    else{
        printf("Data not found\n");
    }

    struct Node* r = Iterative_searchBST(p, 7);
    if(r!=NULL){
        printf("The data is :- %d\n", r->data);
    }
    else{
        printf("Data not found\n");
    }
return 0;
}