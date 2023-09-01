/*ques1.Find the output for this code .
int x;
cout<<”Enter first number\n”;
cin>>x;  // user will give ‘x’ a value.
int y,m;
cout<<”Enter second number and value for taking modulus\n”;
cin>>y>>m;  // user will give ‘y’ a value.
int Z= (x*y)%m;
cout<<”Output is :”<<Z;



*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number\n";
    cin>>x;
    int y,m;
    cout<<"enter second number and value for taking modulus\n";
    cin>>y>>m;
    int z=(x*y)%m;
    cout<<"output is :"<<z;
    return 0;
}

