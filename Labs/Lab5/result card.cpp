#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int marks;
	cout<<"Enter marks: ";
	cin>>marks;
	if(marks>=90)
	cout<<"A grade";
	else if(marks<90 and marks>=80)
	cout<<"B grade";
	else if(marks<80 and marks>=70)
	cout<<"C grade";
	else if(marks<70 and marks>=60)
	cout<<"D grade";
	else cout<<"F grade";
}