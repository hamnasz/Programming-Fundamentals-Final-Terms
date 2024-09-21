#include<iostream>
using namespace std;
int main(){
	string health,gender,location;
	int age;
	cout<<"Welcome to Insurance"<<endl;
	cout<<"Your Age: ";
	cin>>age;
	cout<<"Enter Health Condition: ";
	cin>>health;
	cout<<"Enter Gender: ";
	cin>>gender;
	cout<<"Enter Location: ";
	cin>>location;
	if(age>=25 && age<35 && health=="good" && gender=="male" && location=="city")
	cout<<"Insurance is between 4 thousand and cannot exceede 2 lacs";
	else if(age>=25 && age<35 && health=="good" && gender=="female" && location=="city")
	cout<<"Insurance is between 3 thousand and cannot exceede 1 lacs";
	else if(age>=25 && age<35 && health=="bad" && gender=="male" && location=="village")
	cout<<"Insurance is between 6 thousand and cannot exceede 10 thousand";
	else cout<<"No insurance";
}