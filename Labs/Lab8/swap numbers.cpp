#include<iostream>
using namespace std;
int main(){
int c,d;
cout<<"Enter number for c location:";
cin>>c;
cout<<"Enter number for d location:";
cin>>d;
c = c+d;
d = c-d;
c = c-d;
cout<<"Swap value for c is "<<c<<" and Swap value for d is "<<d;}