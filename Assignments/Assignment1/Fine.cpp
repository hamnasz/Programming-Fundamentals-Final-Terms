#include<iostream>
using namespace std;
int main(){
int days;
cout<<"Enter number of days: ";
cin>>days;
if(days<=5){
cout<<"Fine is 50 paisa";
}
else if(days>6 && days<=10){
cout<<"Fine is one rupee";}
else if(days>=10 && days<30){
cout<<"Fine is 5 rupees";}
else cout<<"Membership is cancelled";}