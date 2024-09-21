#include <iostream>
using namespace std;
int main() {
    const int size = 20;
    int numbers[size];
    // Read 20 numbers and store them in an array
    cout << "Enter 20 numbers:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    // Use an array to store the count of each number
    int count[size] = {0};
    // Traverse the array and count occurrences
    for (int i = 0; i < size; ++i) {
        count[numbers[i]]++;
    }
    // Display duplicates and their occurrence count
    cout << "Duplicates and their occurrence count:\n";
    for (int i = 0; i < size; ++i) {
    if (count[i] > 1) {
    cout << "Number " << i << " occurs " << count[i] << " times.\n";
    }
    }
    return 0;
}
