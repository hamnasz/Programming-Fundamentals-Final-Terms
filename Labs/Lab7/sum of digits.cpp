#include<iostream>
using namespace std;

int main() {
    int sum = 0, m;

    cout << "Enter a number: ";
    cin >> x;

    cout << "The sum of " << x << " digits is = ";

    for (int x; x > 0; x = x / 10) {
        m = x % 10;
        sum = sum + m;
    }

    cout << sum << "\n";
    return 0;
}
