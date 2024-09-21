#include<iostream>
using namespace std;

// Function to calculate the mean
int calculateMean(int arr[], int& size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Function to calculate the median
int calculateMedian(int arr[], int& size) {
    int median;
    if (size % 2 == 0) {
        int middle1 = size / 2 - 1;
        int middle2 = size / 2;
        median = (arr[middle1] + arr[middle2]) / 2;
    } else {
        median = arr[size / 2];
    }
    return median;
}

// Function to calculate the mode
int calculateMode(int arr[], int& size) {
    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < size; ++i) {
        if (arr[i] != -1) {
            int count = 1;

            for (int j = i + 1; j < size; ++j) {
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

    return maxElement;
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

    // Calculate mean
    int mean = calculateMean(arr, n);
    cout << "Mean of array is: " << mean << endl;

    // Calculate median
    int median = calculateMedian(arr, n);
    cout << "Median of array is: " << median << endl;

    // Calculate mode
    int mode = calculateMode(arr, n);
    cout << "Mode of array is: " << mode << endl;

    return 0;
}
