/*Ques 2: Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
*/
#include<iostream>
using namespace std;
int main(){
int r ,area,cir;
cout<<"enter the radius of circle";
cin>>r;
area=3.1415*r*r;
cir=2*3.1415*r;
if(area>cir){
    cout<<"area of the circle is larger than the circumference";

}
else{
    cout<<"circumference of the circle is larger than the area";
}
return 0;

    
}