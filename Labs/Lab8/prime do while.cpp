#include<iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;
    int i = 2;
    do {
        if (num % i == 0) {
            cout << num << " is not a prime number." << endl;
            return 0;
        }
        i++;
    } while (i <= num / 2);
    cout << num << " is a prime number." << endl;
    return 0;
}
