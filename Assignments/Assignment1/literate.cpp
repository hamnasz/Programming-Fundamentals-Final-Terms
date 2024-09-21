#include <iostream>
using namespace std;
int main() {
 using namespace std;
 int men, women, litmen, litwomen, illit, lit, tot = 80000, illitwomen;
 men = (52 / 100.0) * 80000; 
 women = tot - men;
 lit = (48 / 100.0) * 80000;
 litmen = (35 / 100.0) * 80000;
 litwomen = lit - litmen;
 illitwomen = women - litwomen;
 cout << "The total illiterate men of the town is " << men - litmen << endl;
 cout << "The total illiterate women is " << illitwomen << endl;}