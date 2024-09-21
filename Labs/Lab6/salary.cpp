#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int bonus,sal,grade;
	cout<<"Enter salary: ";
	cin>>sal;
	cout<<"Enter grade: ";
	cin>>grade;
	if(grade>17){
	bonus=sal*0.5;
	sal=sal+bonus;
	cout<<"Salary after bonus is: "<<sal;}
	else if(grade<17){
	bonus=sal*0.10;
	sal=sal+bonus;
	cout<<"Salary after bonus is: "<<sal;}
}