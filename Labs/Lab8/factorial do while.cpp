#include<iostream>
using namespace std;

int main() {
    int n, f = 1, i = 1;

    cout << "Enter The Number:";
    cin >> n;

  
    do {
        f = f * i;
        i++;
    } while (i <= n);

    cout << "The Factorial of " << n << " is " << f;

    return 0;
}
