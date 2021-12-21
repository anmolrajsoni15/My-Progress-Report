#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
list<int> list1;
    list1.push_back(5);
    list1.push_back(23);
    list1.push_back(8);
    list1.push_back(52);
    list1.push_back(25);

    display(list1);
    list1.sort();
    display(list1);
 return 0;
}