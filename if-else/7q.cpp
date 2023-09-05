/*Given a point(x,y),write a program to find out if it lies on the x-axis,y-axis or at the origin,viz.(0,0)*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x and y";
    cin>>x>>y;
    if(x==0){
        if(y==0){
            cout<<"it lies at the origin";
        }
        else{
            cout<<"it lies on the y-axis";
        }
    }
    else if(y==0){
       cout<<"it lies on the x-axis";

    }
    else{
        cout<<"quadrants";
    }
}