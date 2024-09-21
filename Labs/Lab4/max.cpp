#include<iostream>
using namespace std;
int main(){
	int avg,num1,num2,num3;
	cout<<"Enter 1st num: ";
	cin>>num1;
	cout<<"Enter 2nd num: ";
	cin>>num2;
	cout<<"Enter 3rd num: ";
	cin>>num3;
	if(num1>num2 && num1>num3)
	cout<<"Num1 is greatest";
	else if(num2>num1 && num2>num3)
	cout<<"Num2 is greatest";
	else cout<<"Num3 is greatest";
}