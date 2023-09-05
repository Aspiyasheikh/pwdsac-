/*Given the length and breadth of a rectangle, write a program to find whether numerically 
the area of the  rectangle is greater than its perimeter*/
#include<iostream>
using namespace std;
int main(){
    int lenght,breadth;
    int rec,per;
    cout<<"enter the length and breadth of rectangle";
    cin>>lenght>>breadth;
    rec=lenght*breadth;
    per=2*(lenght*breadth);
    if(rec>per){
        cout<<"area of rectangle is greater than its perimeter";
    }
    else{
        cout<<"perimeter of rectangle is greater than its rec";
    }
    
return 0;
}