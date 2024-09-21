#include<iostream>
using namespace std;
int main(){
	int cd;
	cout<<"Please Enter Total Call Duration In Minutes: ";
	cin>>cd;
	cout<<"Total Call Duration is: "<<cd<<endl;
	if(cd>0 and cd<=2)
	cout<<"Total Call Charges are: "<<12*cd;
	else if(cd>2 and cd<=5)
	cout<<"Total Call Charges are: "<<10*cd;
	else if(cd>5 and cd<=8)
	cout<<"Total Call Charges are: "<<5*cd;
	else if(cd>8 and cd<=10)
	cout<<"Total Call Charges are: "<<7*cd;
	else if(cd>10)
	cout<<"Total Call Charges are: "<<3*cd;
	else cout<<"Wrong Value Entered";
}