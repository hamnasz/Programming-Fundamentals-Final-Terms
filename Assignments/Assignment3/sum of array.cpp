#include<iostream>
using namespace std;
int main() {
    int n,sum=0;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
    sum = sum+arr[i];
    }
    cout << "Sum of array is: " << sum << endl;
}