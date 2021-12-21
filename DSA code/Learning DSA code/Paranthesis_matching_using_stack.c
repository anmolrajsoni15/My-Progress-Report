#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stack{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct Stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct Stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}

void Push(struct Stack* ptr, char ch){
    if(isFull(ptr)){
        printf("Stack overflown");
    }
    ptr->top++;
    ptr->arr[ptr->top] = ch;
}

char Pop(struct Stack* ptr){
    if (isEmpty(ptr))
    {
        printf("Balanced Paranthesis");
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int isParanthesis(char* ch, int x){
    struct Stack* S;
    S->size = x;
    S->top = -1;
    S->arr = (char*)malloc(S->size * sizeof(char));
    for (int i = 0; i < ch[i]!='\0'; i++)
    {
        if(ch[i] == '('){
            Push(S, '(');
        }
        else if(ch[i] == ')'){
            if(isEmpty(S)){
                return 0;
            }
            Pop(S);
        }
    }
    if(isEmpty(S)){
        return 1;
    }
    return 0;
}

int main(){
    char* ch = "((23+(2*5))";
    int x = sizeof(ch);

    if(isParanthesis(ch, x)){
        printf("Paranthesis matched");
    }
    else{
        printf("Paranthesis not matched");
    }
return 0;
}