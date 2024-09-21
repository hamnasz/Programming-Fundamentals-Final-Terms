#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, x, count=0;  
    cout<<"Enter Size of Array: ";
    cin>> n;
    cout<<"Enter Values of Array: ";
    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    }
    cout<<"Enter Value to Search: ";
    cin>> x;
    for(int i=0; i<n; i++)
    {
    if(arr[i] == x)
    {
    cout<<"Value found at Index: "<<i<<endl;
    count++;
    }
    }    
    cout<<"Value Duplicated in Array "<<count<<" Times";
    return 0;
} 
