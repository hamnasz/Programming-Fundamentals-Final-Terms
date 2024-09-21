 #include<iostream>
using namespace std;
int main() {
    int x, sum = 0, m;
    cout<<"Enter a number: ";
    cin>>x;
    cout << "The sum of " << x << " digits is = ";
    while (x > 0) 
	{
    m = x%10;    
    sum = sum+m;    
    x = x/10;    
    }   
    cout << sum << "\n";
    return 0;
}