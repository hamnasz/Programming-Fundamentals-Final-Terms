#include <iostream>
using namespace std;
int main()
{
    double distance, meter, feet, inch, cm;
    cout << "Distance between two cities in kilometer: ";
    cin >> distance;
    meter = distance * 1000;
    cm = distance * 100000;
    feet = distance * 3280.84;
    inch = distance * 39370.1;
    cout << "Distance between two cities in meter: " << meter << endl;
    cout << "Distance between two cities in centimeter: " << cm << endl;
    cout << "Distance between two cities in feet: " << feet << endl;
    cout << "Distance between two cities in inches: " << inch << endl;
}
