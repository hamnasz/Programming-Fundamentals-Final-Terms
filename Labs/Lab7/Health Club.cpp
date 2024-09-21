#include <iostream>
using namespace std;
int main() {
	cout<<"1. Standard Adult Membership"<<endl;
	cout<<"2. Child Membership"<<endl;
	cout<<"3. Senior Citizen Membership"<<endl;
	cout<<"4. Quit the program"<<endl;
	int choice,months;
	cout<<"Enter no of moths: ";
	cin>>months;
	cout<<"Enter your choice: ";
	cin>>choice;
	if(choice==1)
	cout<<"Membership charges for Senior Adult Membership is: "<<months*500;
	if(choice==2)
	cout<<"Membership charges for Child Membership is: "<<months*200;
	if(choice==3)
	cout<<"Membership chrages for Senior Citizen Membership is: "<<months*300;
	if(choice==4)
	cout<<"Quit the program";
}