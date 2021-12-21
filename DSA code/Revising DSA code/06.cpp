//digit manipulation

#include<iostream>
using namespace std;

void showdigits(int number){
    int numarr[10];
    int i = 0;
    while(number > 0){
        int digit = number%10;
        numarr[i] = digit;
        number = number/10;
        i++;
    }

    for (int j = 0; j < i; j++)
    {
        cout<<numarr[i-j-1]<<", ";
    }
    cout<<endl;
}

int sumdigit(int number){
    int sum = 0;
    while(number>0){
        int digit = number%10;
        sum+=digit;
        number/=10;
    }
    cout<<"The sum of the digits is = "<<sum<<endl;
    return sum;
}

int Productdigit(int number){
    int product = 1;
    while(number>0){
        int digit = number%10;
        product*=digit;
        number/=10;
    }
    cout<<"The product of the digits is = "<<product<<endl;
    return product;
}

int main(){
    int number;
    cout<<"Enter a number "<<endl;
    cin>>number;
    cout<<"The digits in the number is :-";
    showdigits(number);
    sumdigit(number);
    Productdigit(number);
    cout<<"The difference of product of digit and sum of digit is = "<<Productdigit(number) - sumdigit(number);
    
 return 0;
}