#include<iostream>
using namespace std;

class shop
{
   int item_Id[10];
   int item_Price[10];
   static int counter;
   
   public:
    static void initcounter(){
        cout<<"The value of counter is "<<counter<<endl;
    }
    void setprice();
    void displayprice();
};

void shop::setprice(){
    cout<<"Enter the Id of your Item no "<<counter+1<<":- \n";
    cin>>item_Id[counter];
    cout<<" Enter price of Item no"<<counter+1<<" :-";
    cin>>item_Price[counter];
    cout<<endl;
    counter++;
}

void shop::displayprice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with item Id "<<item_Id[i]<<" is $ "<<item_Price[i]<<endl;
    }
    counter=0;
    
}

 int shop::counter;

int main(){
  shop sp[3];
    for(int j=0; j<3; j++){
       sp[j].setprice();
       sp[j].setprice();
       sp[j].setprice();
       sp[j].displayprice();
      shop::initcounter();
    } 
 return 0;
}