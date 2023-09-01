//Ques4: WAP for finding the volume of cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main(){
    int r,h;
    float c;
    cout<<"enter the radius and height";
    cin>>r>>h;
    c=3.1415*r*r*h;
    cout<<c;
    return 0;
}