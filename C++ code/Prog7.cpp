#include<iostream>
using namespace std;

class employee
{
 private:
   int salary, bonus;
 public:
   int officeno;
   void setdata(int a, int b);
   void getdata(){
       cout<<"He gets the salary amount "<<salary<<endl;
       cout<<"He gets bonus on "<<bonus<<" every year"<<endl;
   }
};

void employee :: setdata(int a, int b)
{
    salary = a;
    bonus = b;
}

int main(){
    employee Anmol;
    Anmol.officeno = 183;
    Anmol.setdata(90000, 10000);
    Anmol.getdata();
    cout<<"and his office no. is "<<Anmol.officeno;

 return 0;
}