#include<iostream>
using namespace std;
int main() {
    int n;
	cout << "Enter size: ";
    cin >> n;
	int mn = INT_MAX; 
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
    mn = min(mn, arr[i]);
    }
    cout << "Minimum number is: " << mn << endl;}