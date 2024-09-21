#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 1;
    int Mango[SIZE], Orange[SIZE], Banana[SIZE];
    int totalBill[SIZE] = {0};
    cout << "Enter the number of mangoes, oranges, and bananas purchased by each customer:\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Customer " << i + 1 << "\n";
        cout << "Mangoes: ";
        cin >> Mango[i];
        cout << "Oranges: ";
        cin >> Orange[i];
        cout << "Bananas: ";
        cin >> Banana[i];
        totalBill[i] = Mango[i] * 20 + Orange[i] * 10 + Banana[i] * 5;
    }
    cout << "\nCustomer No.  Mangoes  Oranges Bananas\tTotal Bill\n";
    cout << "-------------------------------------------------------\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "    " << i + 1 << "\t\t" << Mango[i] << "\t" << Orange[i] << "\t" << Banana[i] << "\tRs. " << totalBill[i] << endl;
    }
}
