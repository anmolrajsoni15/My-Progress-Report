#include<iostream>
using namespace std;

class myArray{
    public:
    int total_size;
    int used_size;
    int *ptr = new int[total_size];
    myArray(int tsize, int usize){
        total_size = tsize;
        used_size = usize;

    }

    void setVal(){
         for (int i = 0; i <used_size; i++)
         {
         int n;
         cout<<"Enter the element "<< i<<" :- ";
         cin>>n;
         ptr[i] = n;
         }
    }

    void show(){
        for (int i = 0; i <used_size; i++)
        {
            cout<<ptr[i]<<endl;
        }
    }
};
        
int main(){
    myArray marks(10, 2);
    marks.setVal();
    marks.show();
 return 0;
}