#include<iostream>
using namespace std;
int main()
{
    int n;  
    cout<<"Enter Size of Array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter Values of Array: ";
    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    }
    cout<<"Even numbers are : ";
	for(int i=0; i<n; i++)
    {
    if(arr[i]%2==0)
    {
    cout<<arr[i]<<" ";
    }
    }    
    return 0;
}