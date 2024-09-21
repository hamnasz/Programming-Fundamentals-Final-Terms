#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }
	int c;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) {
    c++;
	cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
    }
    }
    }
	cout<<c;
    return 0;
}
