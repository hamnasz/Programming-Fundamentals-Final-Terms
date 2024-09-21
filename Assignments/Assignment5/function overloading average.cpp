//Function overloading average
#include<iostream>
using namespace std;
int avg(int a, int b){
	cout<<"Functions with 2 arguements: ";
	return (a+b)/2;
}
int avg(int a, int b, int c){
	cout<<"Functions with 3 arguements: ";
	return (a+b+c)/3;
}
int main(){
	cout<<avg(3,6)<<endl;
	cout<<avg(3,6,7)<<endl;
}