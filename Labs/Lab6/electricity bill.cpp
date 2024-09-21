#include <iostream>
using namespace std;
int main() {
    int units;
    double cost;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    if (units <= 100) {
        cost = units * 5.0;
    } else if (units <= 500) {
        cost = 100 * 5.0 + (units - 100) * 10.0;
    } else {
        cost = 100 * 5.0 + 400 * 10.0 + (units - 500) * 15.0;
    }
    cout << "Electricity Bill: Rs. " << cost << endl;
    return 0;
}
