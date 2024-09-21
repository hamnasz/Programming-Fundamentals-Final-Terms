#include <iostream>
using namespace std;

int main() {
    int size, i = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements in ascending order or descending order :\n";
    while (i < size) {
        cin >> arr[i];
        i++;
    }

    int n, loc = -1, start = 0, mid, end = size - 1, c = 0;
    cout << "Enter the number to find: ";
    cin >> n;

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == n) {
            loc = mid;
            cout << "Number found at index " << loc << endl;

            // Check for other occurrences in the remaining portion of the array
            int left = mid - 1;
            int right = mid + 1;

            // Check left side
            while (left >= 0 && arr[left] == n) {
                cout << "Number found at index " << left << endl;
                left--;
            }

            // Check right side
            while (right < size && arr[right] == n) {
                cout << "Number found at index " << right << endl;
                right++;
            }

            break;
        } else if (n < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << endl;

    if (loc == -1) {
        cout << "The number " << n << " is not present in the array." << endl;
    }

    return 0;
}
