#include<iostream>
using namespace std;
int main(){
	int avg,sub1,sub2,sub3;
	cout<<"Enter marks: ";
	cin>>sub1;
	cout<<"Enter marks: ";
	cin>>sub2;
	cout<<"Enter marks: ";
	cin>>sub3;
	avg = (sub1+sub2+sub3)/3;
	if(avg>80)
	cout<<"You are above standard"<<"\n"<<"Admission Granted";
}
