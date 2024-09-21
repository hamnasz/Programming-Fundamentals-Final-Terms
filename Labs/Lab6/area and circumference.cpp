#include<iostream>
using namespace std;
int main(){
	float a,c,r;
	int choice;
	cout<<"Enter Radius: ";
	cin>>r;
	cout<<"Enter choice: ";
	cin>>choice;
	if(choice==1){
	a = 3.14*r*r;
	cout<<"Radius is: "<<a;
	}
	else if(choice==2){
	c= 2*3.14*r;
	cout<<"Circumference is: "<<c;
	}
	else cout<<"Invalid choice";
}
