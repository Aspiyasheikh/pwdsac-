//Take 2 interger input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value";
    cin>>x>>y;
    if(x>y){
        cout<<"fist number"<<x<<" is largest";
    }
    else{
        cout<<"second number"<<y<<" is largest";
    }
    return 0;

}