//Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n value";
    cin>>n;
    for(int i=3;i<=n;i*=4)
    {
        cout<<i<<endl;
    }
    return 0;
}