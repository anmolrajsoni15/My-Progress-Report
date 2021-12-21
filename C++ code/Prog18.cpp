#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st = "Hi My name is Anmol Raj Soni";
    ofstream out("anmol.txt");
    out<<st;

    ifstream in("anmol.txt");
    in>>st;
    getline(in, st);
    cout<<st;
 return 0;
}