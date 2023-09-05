/*given three points(x1,y1),(x2,y2)and(x3,y3),write a program to check if all the three points fall on one straight line*/
#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"Enter 1st point";
    cin>>x1>>y1;
    cout<<"Enter 2nd point";
    cin>>x2>>y2;
    cout<<"Enter 3rd point";
    cin>>x3>>y3;
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if(m1==m2)  cout<<"collinear";
    else cout<<"non collinear";
    return 0; 
}