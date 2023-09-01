// ques5:WAP to find the difference between ASCII of two characters ,take them as input 
#include <iostream>
using namespace std;
int main(){
    char c1,c2;
    cout<<"enter the 1st charecter value";
    cin>>c1;
    cout<<"enter the 2nd character value";
    cin>>c2;
    int x,y;
    x=(int)c1;
    y=(int)c2;
    cout<<x-y;
    return 0;
}