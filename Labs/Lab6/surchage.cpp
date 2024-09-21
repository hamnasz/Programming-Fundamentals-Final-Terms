#include <iostream>
using namespace std;
int main() {
    int units;
    double cost, totalBill, surcharge = 0;
    const double lineRent = 500.0;
    const double surchargeRate = 0.05;
    const double surchargeThreshold = 2000.0;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    if (units <= 100) {
        cost = units * 5.0;
    } else if (units <= 500) {
        cost = 100 * 5.0 + (units - 100) * 10.0;
    } else {
        cost = 100 * 5.0 + 400 * 10.0 + (units - 500) * 15.0;
    }

    totalBill = cost + lineRent;

    if (totalBill > surchargeThreshold) {
        surcharge = totalBill * surchargeRate;
        totalBill += surcharge;
    }


    cout << "Electricity Bill: Rs. " << totalBill << endl;

    return 0;
}
