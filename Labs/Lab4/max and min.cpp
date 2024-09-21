#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,d,e;
	cout<<"Enter 1st num: ";
	cin>>a;
	cout<<"Enter 2nd num: ";
	cin>>b;
	cout<<"Enter 3rd num: ";
	cin>>c;
	cout<<"Enter 4th num: ";
	cin>>d;
	cout<<"Enter 5th num: ";
	cin>>e;
	cout<<"Max is: "<<max({a,b,c,d,e})<<endl;
	cout<<"Max is: "<<min({a,b,c,d,e});
}