#include <iostream>
using namespace std;
int main() {
    int n;
    bool isTriangular = false;
    cout << "Enter a number: ";
    cin >> n;
    if (n >= 0) {
        int sum = 0;
        for (int i = 1; sum <= n; i++) {
            sum += i;
            if (sum == n) {
                isTriangular = true;
                break;
            }
        }
    }
    if (isTriangular) {
        cout << "The number is a triangular number";
    } else {
        cout << "The number is NOT a triangular number";
    }

    return 0;
}
