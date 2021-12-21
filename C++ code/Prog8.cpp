#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
       string s;
       
    public:
       void read_bin();
       void check_bin();
       void ones_compliment();
       void display();
};

void binary::read_bin(){
    cout<<"Enter your number\n";
    cin>>s;
}

void binary::check_bin(){
    for ( int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"This is not a valid Binary\n";
        exit(0);
        }
    }
    
}
void binary::ones_compliment(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    
}

void binary::display(){
    cout<<"The Binary Number is\n";
    for (int i = 0; i < s.length(); i++)
    {
       cout<<s.at(i);
    }
    cout<<endl;
    
}
int main(){
 binary b;
 b.read_bin();
 b.check_bin();
 b.display();
 b.ones_compliment();
 b.display();
 return 0;
}
