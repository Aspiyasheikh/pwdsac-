/*write a program to input sides of a triangle and check whether a triangle is equilateral,scalene or isosceles triangle.*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the sides of triangle";
    cin >> a >> b >> c;
    if (a == b)
    {
        if (a == c)
        {
            cout << "triangle is equilateral";
        }
        else
        {
            cout << "triangle is isosceles";
        }
    }
    else
    {
        if (c == a)
        {
            cout << "triangle is isosceles";
        }
        else if (c == b)
        {
            cout << "triangle is isosceles";
        }
        else
        {
            cout << "triangle is scalene";
        }
    }
    return 0;
}