#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
    friend void distance(Point p1, Point p2);
    public:
       Point(int a, int b){
           x = a;
           y = b;
       } 
       void displayPoint(){
           cout<<"The coordinates are :- ("<<x<<", "<<y<<')'<<endl;
       }
      
};

void distance(Point p1, Point p2){
    float dis = sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
    cout<<"The distance between the points is "<<dis;
}
int main(){
 Point P(3, 2);
 P.displayPoint();

 Point Q(9, 4);
 Q.displayPoint();

 distance(P, Q);
 return 0;
}