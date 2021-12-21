#include <iostream>
using namespace std;

class ShopItem
{
    int Id;
    float Price;

public:
    void setdata(int a, float b)
    {
        Id = a;
        Price = b;
    }
    void getdata()
    {
        cout << "The Id of the Item is:-" << Id << endl;
        cout << "The Price of the item is :-" << Price << endl;
    }
};

int main()
{
    int size = 3;
    int p;
    float q;
    ShopItem *S = new ShopItem[size];
    ShopItem *Stemp = S;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and Price of the item" << endl;
        cin >> p >> q;
        (*S).setdata(p, q);
        S++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item no " << i + 1 << ":" << endl;
        Stemp->getdata();
        Stemp++;
    }

    return 0;
}