/*write a c++ program to input any character and check whether it is the alphabet,digit or special character*/
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the character";
    cin>>a;
    if(a>=65&&a<=90||a>=97&&a<=122){
        cout<<"it is value is alphabet";
    }
    else if(a>=48&&a<=57){
        cout<<"it is value is digit";
    }
    else{
        cout<<"it is special character";
    }
    return 0;

}