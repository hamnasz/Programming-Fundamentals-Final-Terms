#include<iostream>
using namespace std;
int findMax(int arr[], int size) {
    int mx = INT_MIN;
    for (int i = 0; i < size; i++) {
        mx = max(mx, arr[i]);
    }
    return mx;}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
    cin >> arr[i];}
    int maxNumber = findMax(arr, n);
    cout << "Maximum number is: " << maxNumber << endl;
    return 0;}