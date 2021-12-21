#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

void Traversal(struct Node* ptr, int n){
    for(int j = 0; j<n; j++){
    cout<<"Element"<<j+1<<":- "<<ptr->data<<endl;
    ptr = ptr->Next;
    }
}

int main(){
 int n;
 cout<<"Enter number of elements ";
 cin>>n;
 struct Node *head[n];
 for (int i = 0; i < n; i++)
 {
     head[i] = new struct Node[sizeof(struct Node)];
 }
 for (int i = 0; i < n; i++)
 {
     cout<<"Enter the element "<<i+1<<' ';
     cin>>head[i]->data;
     head[i]->Next = head[i+1];
 }
  head[n-1] = NULL;
 Traversal(head[0], n);
 return 0;
}