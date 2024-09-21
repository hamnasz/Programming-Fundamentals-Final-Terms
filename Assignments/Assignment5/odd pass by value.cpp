#include<iostream>
using namespace std;
void odd(int n){
	if(n%2!=0)
    cout<<"Odd";
}
int main()
{
    int n;  
    cout<<"Enter number: ";
    cin>> n;
    odd(n);
    return 0;
}