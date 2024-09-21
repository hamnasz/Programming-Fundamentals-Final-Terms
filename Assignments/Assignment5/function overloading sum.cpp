//Fucntion overloading sum
#include<iostream>
using namespace std;
int sum(int a, int b){
	cout<<"Functions with 2 arguements: ";
	return a+b;
}
int sum(int a, int b, int c){
	cout<<"Functions with 3 arguements: ";
	return a+b+c;
}
int main(){
	cout<<sum(3,6)<<endl;
	cout<<sum(3,6,7)<<endl;
}