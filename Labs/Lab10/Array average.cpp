#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i];
    }
    int average =(sum) / SIZE;
    int count = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] > average) {
            count++;
        }       
    }
   
    cout << "Average of the numbers: " << average << endl;
    cout << "Number of elements greater than the average: " << count << endl;

    return 0;
}
