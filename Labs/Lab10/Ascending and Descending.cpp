#include<iostream>
using namespace std;
int main(){
	int arr[10]={13,14,15,16,18,12,26,34,65,71};
	cout<<"Array in ascending order: "<<endl;
	for(int i=0;i<=9;i++){
	cout<<arr[i]<<" ";
	cout<<endl;
	}
	cout<<endl;
	cout<<"Array in descending order: "<<endl;
	for(int i=9;i>=0;i--){
	cout<<arr[i]<<" ";
	cout<<endl;
	}
}