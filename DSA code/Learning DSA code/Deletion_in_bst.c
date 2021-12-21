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

struct Node* inorderPredecessor(struct Node* root){
    root = root->left;
    while(root->right!= NULL){
        root = root->right;
    }
    return root;
}
struct Node* deletion_inBST(struct Node* root, int value){
    struct Node* ipre;
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    if(value < root->data){
        root->left = deletion_inBST(root->left, value);
    }
    else if(value>root->data){
        root->right = deletion_inBST(root->right, value);
    }
    else{
        ipre = inorderPredecessor(root);
        root->data = ipre->data;
        root->left = deletion_inBST(root->left, ipre->data);
    }
    return root;
}
/* The TREE is :-
            5
           / \
          3   6
         / \
        2   4
*/

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
    deletion_inBST(p, 3);
    printf("The new BST after deletion is :- ");
    InorderTraversal(p);

return 0;
}