#include<iostream>
using namespace std;
void fact(int &n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i; 
    }
    cout << "The Factorial of " << n << " is " << f;
}

int main() {
    int num;
    cout << "Enter The Number:";
    cin >> num;
    fact(num);
    return 0;
}