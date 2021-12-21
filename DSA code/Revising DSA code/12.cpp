#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of dimond ";
    cin>>n;
    int r, c;
    cout<<"\nEnter rows :- ";
    cin>>r;
    cout<<"\nEnter columns :- ";
    cin>>c;
    string s[] = {"/", "\\", "e", "o"};

    for(int row = 0; row < r; row++){
        for (int i = 1; i <= n; i++)
        {
            for(int column = 0; column < c; column++){
                int j = 1;
                while (j <= (n - i))
                {
                    cout << s[2];
                    j++;
                }
                cout << s[0];

                int start = i - 1;
                while (start)
                {
                    cout << s[3];
                    start--;
                }

                int start1 = i - 1;
                while (start1)
                {
                    cout << s[3];
                    start1--;
                }
                cout << s[1];

                int start2 = (n - i);
                while (start2)
                {
                    cout << s[2];
                    start2--;
                }
            }
            cout<<endl;
        }

        for (int i = n; i>=1; i--)
        {
            for(int column = 0; column < c; column++){
                int j = 1;
                while (j <= (n - i))
                {
                    cout << s[2];
                    j++;
                }
                cout << s[1];

                int start = i - 1;
                while (start)
                {
                    cout << s[3];
                    start--;
                }

                int start1 = i - 1;
                while (start1)
                {
                    cout << s[3];
                    start1--;
                }
                cout << s[0];

                int start2 = (n - i);
                while (start2)
                {
                    cout << s[2];
                    start2--;
                }
            }
            cout<<endl;
        }
    }

    return 0;
}