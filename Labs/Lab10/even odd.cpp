#include<iostream>
using namespace std;
int main(){
	int arr[5]={12,26,34,65,71};
	cout<<"Even odd in array are: "<<endl;
	for(int i=0;i<=4;i++){
	if(arr[i]%2==0){
	cout<<"Even"<<" "<<endl;
	}
	else cout<<"Odd"<<" "<<endl;
	}
	}