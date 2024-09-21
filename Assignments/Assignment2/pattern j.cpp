#include <iostream>
using namespace std;

int main()
{
    int number = 5;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number - i; j++)
            cout << " ";

        for (int k = 0; k < 2 * i - 1; k++)
            cout << (k == 0 || k == 2 * i - 2 ? "*" : " ");

        cout << endl;
    }

    for (int i = number - 1; i >= 1; i--)
    {
        for (int j = 0; j <= number - i; j++)
            cout << " ";

        for (int k = 0; k < 2 * i - 1; k++)
            cout << (k == 0 || k == 2 * i - 2 ? "*" : " ");

        cout << endl;
    }

    return 0;
}
