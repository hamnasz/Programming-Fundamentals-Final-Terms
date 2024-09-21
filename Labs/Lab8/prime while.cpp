#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 2;
    while (i <= num / 2 && num % i != 0) {
	i++;
    }

    if (i > num / 2) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
