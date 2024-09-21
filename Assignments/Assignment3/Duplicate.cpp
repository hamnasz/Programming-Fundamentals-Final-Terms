#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, count=0;  

    cout<<"Enter Values of Array: ";
    for(int i=0; i<10; i++)
    cin>>arr[i];

    cout<<"Enter Value to Search: ";
    cin>> n;
    for(int i=0; i<10; i++)
    {
        if(arr[i] == n)
        {
            cout<<"Value found at Index: "<<i<<endl;
            count++;
        }
    }    
    cout<<"Value Duplicated in Array "<<count<<" Times";
    return 0;
}