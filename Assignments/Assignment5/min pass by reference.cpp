#include<iostream>
using namespace std;
int findMin(int arr[], int &size) {
    int mn = INT_MAX;
    for (int i = 0; i < size; i++) {
        mn = min(mn, arr[i]);
    }
    return mn;
}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int minNumber = findMin(arr, n);
    cout << "Minimum number is: " << minNumber << endl;
    return 0;
}