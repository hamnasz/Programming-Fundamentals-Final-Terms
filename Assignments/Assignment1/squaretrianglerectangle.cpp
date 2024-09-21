#include<iostream>
#include<cmath>
using namespace std;
int main(){
cout<<"Press 1 for rectangle"<<endl;
cout<<"Press 2 for square"<<endl;
cout<<"Press 3 for isosceles triangle"<<endl;
cout<<"Press 4 for right angle triangle with p and b"<<endl;
cout<<"Press 5 for right angle triangle with h and p"<<endl;
cout<<"Press 6 for right angle triangle with h and b"<<endl;
int choice;
int a,b;
float area,l,w,h,base,p;
cout<<"Enter your choice: ";
cin>>choice;
if(choice==1){
cout<<"Enter height: ";
cin>>h;
cout<<"Enter width: ";
cin>>w;
area=w*h;
cout<<"area is: "<<area;}
else if(choice==2){
cout<<"Enter length: ";
cin>>l;
area=l*l;
cout<<"area is: "<<area;}
else if(choice==3){
cout<<"Enter base: ";
cin>>base;
cout<<"Enter height: ";
cin>>h;
area=0.5*base*h;
cout<<"area is: "<<area;}
else if(choice==4){
cout<<"Enter base: ";
cin>>base;
cout<<"Enter perpendicular: ";
cin>>p;
h=(base*base)+(p*p);
cout<<"Hypotenuse is: "<<sqrt(h)<<endl;
area=0.5*base*p;
cout<<"area is: "<<area;}
else if(choice==5){
cout<<"Enter Hypotenuse: ";
cin>>h;
cout<<"Enter perpendicular: ";
cin>>p;
base=(h*h)-(p*p);
cout<<"Base is: "<<sqrt(base)<<endl;
area=0.5*base*p;
cout<<"area is: "<<area;}
else if(choice==6){
cout<<"Enter Hypotenuse: ";
cin>>h;
cout<<"Enter base: ";
cin>>base;
p=(h*h)-(base*base);
cout<<"Perpendicular is: "<<sqrt(p)<<endl;
area=0.5*base*p;
cout<<"area is: "<<area;}
else cout<<"Invalid Choice";}