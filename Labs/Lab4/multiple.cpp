#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter 1st num: ";
	cin>>x;
	cout<<"Enter 2nd num: ";
	cin>>y;
	if(x%y==0 || y%x==0 )
	cout<<"Second number "<<y<<" is multiple of "<<x;
}