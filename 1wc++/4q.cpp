/*Ques4: What is the output of this program?
void main(){
	int a=4;
int b=5;
a++;b--;
cout<<++a<<” “<<b–-;
}

*/
#include <iostream>
using namespace std;
void mainMY(){
int a=4;
int b=5;
a++;b--;
cout<<++a<<" "<<b--;
}
int main(){
    mainMY();
    return 0;
}

