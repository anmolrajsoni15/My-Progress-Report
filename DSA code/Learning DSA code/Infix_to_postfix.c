#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stack{
    int size;
    int top;
    char *arr;
};

int stackTop(struct Stack* sp){
    return sp->arr[sp->top];
}
int isEmpty(struct Stack* sp){
    if(sp->top == -1){
        return 1;
    }
    else
    return 0;
}

int isFull(struct Stack* sp){
    if(sp->top == sp->size-1){
        return 1;
    }
    return 0;
}

void Push(struct Stack* sp, char ch){
    if(isFull(sp)){
        printf("Stack Overflown");
    }
    else{
        sp->top++;
        sp->arr[sp->top] = ch;
    }
}

char Pop(struct Stack* sp){
    if(isEmpty(sp)){
        printf("Stack Underflown");
        return -1;
    }
    else{
        char val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

int isOperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return 1;
    }
    else 
        return 0;
}

int Precedence(char ch){
    if(ch == '/' || ch == '*'){
        return 3;
    }
    else if(ch == '+' || ch == '-'){
        return 2;
    }
    else return 0;
}

char* InfixToPostfix(char* infix){
    struct Stack* sp = (struct Stack *) malloc(sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char* Postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i = 0;
    int j = 0;
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            Postfix[j] = infix[i];
            i++;
            j++;
        }
        else{
             if(Precedence(infix[i]) > Precedence(stackTop(sp))){
                 Push(sp, infix[i]);
                 i++;
             }
             else{
                 Postfix[j] = Pop(sp);
                 j++;
             }
        }
    }
    while(!isEmpty(sp)){
        Postfix[j] = Pop(sp);
        j++;
    }
    Postfix[j] = '\0';
    return Postfix;
}

int main(){
  char* infix = "x-y/z-k*d";
  printf("Postfix expression is %s", InfixToPostfix(infix));
return 0;
}