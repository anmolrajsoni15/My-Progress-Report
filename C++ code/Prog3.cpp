#include<iostream>
using namespace std;

int main(){
    // int age;
    // cout<<"In this program we are going to learn if else if statement\n"<<endl;
    // cout<<"Enter your age:-"<<endl;
    // cin>>age;

    // if(age<10)
    // cout<<"You are a kid"<<endl;
    // else if(age>10 && age<18)
    // cout<<"You are a student"<<endl;
    //  else if(age==18)
    // cout<<"You are a adolesant"<<endl;
    //  else if(age>18 && age<25)
    // cout<<"You are Young"<<endl;
    // else
    // cout<<"You are adult"<<endl;
    cout<<"Let's learn about switch-case"<<endl;
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 10:
        cout<<"You are a Kid"<<endl;
        break;
    case 18:
        cout<<"You are Adolesant"<<endl;
        break;
    case 30:
        cout<<"You are a Adult"<<endl;
        break;
    
    default:
    cout<<"You are Alien"<<endl;
        break;
    }

    return 0;
}