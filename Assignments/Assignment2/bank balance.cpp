#include <iostream>
using namespace std;
int main()
{
	int d_a, n_b, w_a, bal, choice;
	cout << "Welcome!" << endl;
	cout << "Enter your balance: ";
	cin >> bal;
	cout << "an option:\n1.Withdraw Amount\n2.Deposit Amount\n3.Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "How much you want to withdraw from your amount\nAmount: ";
		cin >> w_a;
		if (w_a < bal)
		{
			n_b = bal - w_a;
			cout << "Your new balance is: " << n_b;
		}
		else
			cout << "Amount enter is greater than balance please enter correct amount";
	}
	else if (choice == 2)
	{
		cout << "How much amount you want to deposit: ";
		cin >> d_a;
		n_b = d_a + bal;
		cout << "Your new balance is: " << n_b;
	}
	else if (choice == 3)
	{
		cout << "Exit";
	}
	else
		cout << "Please enter correct choice";
}
