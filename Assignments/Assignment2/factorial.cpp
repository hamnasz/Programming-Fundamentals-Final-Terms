#include<iostream>
using namespace std;
int main() {
    int n, f = 1;
    cout << "Enter The Number:";
    cin >> n;//take number from user
    for (int i = 1; i <= n; i++) {
    f = f * i;//calculates factorial
    }
    cout << "The Factorial of " << n << " is " << f;
    return 0;
}
