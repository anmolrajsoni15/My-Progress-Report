#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    int height;
};

int getHeight(struct Node* n){
    if(n == NULL)
        return 0;
    return n->height;
}

struct Node* CreateNode(int key){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}

int getBalanceFactor(struct Node* n){
    if(n == NULL){
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

int max(int a, int b){
    return (a>b)?a:b;
}

struct Node* RightRotatae(struct Node* y){
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return x;
}

struct Node* LeftRotatae(struct Node* x){
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return y;
}

struct Node* insert(struct Node* node, int key){
    if(node == NULL)
        return CreateNode(key);

    if(key < node->data){
        node->left = insert(node->left, key);
    }
    else if(key > node->data){
        node->right = insert(node->right, key);
    }
    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
    int bf = getBalanceFactor(node);

    //left left case
    if(bf>1 && key < node->left->data){
        return RightRotatae(node);
    }
    //right right case
    if(bf < (-1) && key > node->right->data){
        return LeftRotatae(node);
    }
    //left right case
    if(bf>1 && key > node->left->data){
        node->left = LeftRotatae(node->left);
        return RightRotatae(node);
    }
    //right left case
    if(bf < (-1) && key<node->right->data){
        node->right = RightRotatae(node->right);
        return LeftRotatae(node);
    }
return node;
}

void preOrder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    struct Node * root = NULL;
 
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preOrder(root);

return 0;
}