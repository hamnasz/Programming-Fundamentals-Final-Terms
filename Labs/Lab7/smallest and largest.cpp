#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter 1st num:";
	cin>>a;
	cout<<"Enter 2nd num:";
	cin>>b;
	cout<<"Enter 3rd num:";
	cin>>c;
	cout<<"Enter 4th num:";
	cin>>d;
	cout<<a<<b<<c<<d<<endl;
	if(a>b&&a>c&&a>d)
	cout<<"1st is largest";
	else if(b>a&&b>c&&b>d)
	cout<<"2nd is largest ";
	else if(c>a&&c>b&&c>d)
	cout<<"3rd is largest ";
	else if(d>a&&d>b&&d>c)
	cout<<"4th is largest ";
	cout<<endl;
	if(a<b&&a<c&&a<d)
	cout<<"1st is smallest";
	else if(b<a&&b<c&&b<d)
	cout<<"2nd is smallest";
	else if(c<a&&c<b&&c<d)
	cout<<"3rd is smallest";
	else if(d<a&&d<b&&d<c)
	cout<<"4th is smallest";
}