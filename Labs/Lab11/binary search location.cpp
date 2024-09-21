#include<iostream>
using namespace std;
int main() {
    const int size = 10; 
    int arr[size];
    cout << "Enter numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int n, mid, start = 0, end = size - 1;

    cout << "Enter number to find: ";
    cin >> n;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == n) {
            cout << "Number found at index: " << mid << endl;
            return 0; 
        } else if (n < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "The number " << n << " is not present in the array" << endl;
    return 0;
}