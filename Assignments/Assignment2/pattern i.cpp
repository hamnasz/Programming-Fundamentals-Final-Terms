#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= (5 - i); j++)
            cout << " ";

        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";

        // Move to the next line
        cout << endl;
    }

    // Reverse the pattern for the bottom half
    for (int i = 1; i <= (5 - 1); i++)
    {
        // Print leading spaces
        for (int j = 1; j <= i; j++)
            cout << " ";

        // Print stars
        for (int j = 1; j <= (2 * (5 - i) - 1); j++)
            cout << "*";

        // Move to the next line
        cout << endl;
    }

    cout << endl;
    return 0;
}
