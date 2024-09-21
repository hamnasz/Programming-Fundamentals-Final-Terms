#include <iostream>
using namespace std;
void even(int &n)
{
    if (n % 2 == 0)
        cout << "Even";
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    even(n);
    return 0;
}
