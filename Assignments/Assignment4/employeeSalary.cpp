#include <iostream>
using namespace std;
int main() {
    char employees[] = {'F', 'W', 'H', 'L', 'B', 'A', 'C', 'E', 'D', 'T'};
    int salaries[] = {250001, 100000, 280000, 100000, 260000, 180000, 140000, 240000, 265000, 170000};
    cout << "\tEmployee and Salaries\n" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << employees[i] << ": $" << salaries[i];
        if (salaries[i] > 250000) {
            cout << " - Tax to be paid" << endl;
        } else {
            cout << " - No tax" << endl;
        }
    }
    return 0;
}
