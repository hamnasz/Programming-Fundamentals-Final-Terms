#include<iostream>
using namespace std;

int main() {
    int n, sum = 0, mean, median;

    cout << "Enter size: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate mean
    mean = sum / n;
    cout << "Mean of array is: " << mean << endl;

    // Calculate median
    if (n % 2 == 0) {
        int middle1 = n / 2 - 1;
        int middle2 = n / 2;
        median = (arr[middle1] + arr[middle2]) / 2;
    } else {
        median = arr[n / 2];
    }
    cout << "Median of array is: " << median << endl;

    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; ++i) {
        if (arr[i] != -1) {
            int count = 1;

            for (int j = i + 1; j < n; ++j) {
                if (arr[i] == arr[j]) {
                    ++count;
                    arr[j] = -1;  
                }
            }

            if (count > maxCount) {
                maxCount = count;
                maxElement = arr[i];
            }
        }
    }

    cout << "Mode of array is: " << maxElement;
}
