#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int pa = 1000;
    const double r = 0.05;
    int a;
    for (int n = 1; n <= 10; n++) {
    a = pa * pow(1 + r, n);
    cout << a <<endl;
    }
    return 0;
}
