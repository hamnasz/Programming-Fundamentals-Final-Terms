#include<iostream>
using namespace std;
int main(){
	const int arraysize=10;
	int array[arraysize];
	int max,min;
	for(int i=0;i<arraysize;i++){
	cout<<"Enter any number: ";
	cin>>array[i];
	}
	max=min=array[0];
	cout<<"Elements in array: ";
	for(int i=0;i<arraysize;i++){
	cout<<array[i]<<", ";
	if(array[i]>max)
	max = array[i];
	if(array[i]<min)
	min = array[i];
	}
	cout<<endl;
	cout<<"Maximum value in array is: "<<max<<endl;
	cout<<"Minimum value in array is: "<<min<<endl;
	return 0;
}
