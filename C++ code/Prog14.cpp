#include <iostream>
using namespace std;

class Student
{
protected:
    int Roll_no;

public:
    void set_rollno(int roll)
    {
        Roll_no = roll;
    }
    void print_rollno()
    {
        cout << "Your roll no is " << Roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float Physics, Maths;

public:
    void set_marks(float P, float M)
    {
        Physics = P;
        Maths = M;
    }
    void display_marks()
    {
        cout << "Your result is here: " << endl;
        cout << "Maths : " << Maths << endl;
        cout << "Physics : " << Physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = Maths + Physics + score;
        print_rollno();
        display_marks();
        print_score();
        cout << "Your total score is :-" << total << endl;
        cout << "Your percentage is :-" << (total / 210) * 100 << endl;
    }
};

int main()
{
    Result Anmol;
    Anmol.set_rollno(528766);
    Anmol.set_marks(95.0, 94.0);
    Anmol.set_score(10);
    Anmol.display();
    return 0;
}