#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Limit: ";
    cin>>n;
    int f = 1, Sum = 0;
    for (int i = 1; i <= n; i++) {
    f = f * i;
    Sum += f;
    }
    cout <<"Total Sum of factorials is: "<< Sum;
    return 0;
}
