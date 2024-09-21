#include<iostream>
using namespace std;
int main(){
cout<<"Press 1 to convert Farenheit to Celsius"<<endl;;
cout<<"Press 2 to convert Celsius to Farenheit "<<endl;
int choice;
float temprature,F,C;
cout<<"Enter your choice: ";
cin>>choice;
if(choice==1){
cout<<"Enter temprature in Farenheit: ";
cin>>F;
C=(F-32)*5/9;
cout<<"Temprature in Celcius is: "<<C;}
if(choice==2){
cout<<"Enter temprature in Celsius: ";
cin>>C;
F=C*9/5 +32;
cout<<"Temprature in Farenheit is: "<<F;}
else cout<<"Invalid choice";}