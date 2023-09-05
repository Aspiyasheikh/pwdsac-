/*if the marks of A,B and C are input through the keyboard,write a program to determine the student scoring least marks.*/
#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout << "enter the value of A,B,C";
    cin >> A >> B >> C;
    if (A < B)
    {
        if (A < C)
        {
            cout << "student scoring least marks is" << A;
        }
        else
        {
            cout << "student scoring least marks is" << C;
        }
    }
    else if(C<B)
    {
        if (C<A)

        {
            cout << "stdent scoring least marks is" << C;
        }
        else 
            {
                cout << "student scoring least marks is " << A;
            }
    }
    else{
        cout<<"student scoring least marks is "<<B;
    }
  
    return 0;
}