#include<iostream>
using namespace std;
int main(){
	const int arraysize=10;
	int array[arraysize];
	int sum = 0;
	for(int i=0;i<arraysize;i++){
	cout<<"Enter any number: ";
	cin>>array[i];
	}
	cout<<"Elements in array: ";
	for(int i=0;i<arraysize;i++){
	cout<<array[i]<<", ";
	sum = sum+array[i];
	}
	cout<<endl;
	cout<<"Total sum of array elements are: "<<sum;
	return 0;
}