#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];    }
    // Sort the array
	for (int i=0;i<n;i++){
			for (int j=0;j<n-1;j++){  
				if (arr[j]>arr[j+1]){
					int temp=arr[j];   
					arr[j]=arr[j+1];     
					arr[j+1]=temp;   }}}
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";   }
    int x, c = 0;
    cout << "\nEnter number to find: ";
    cin >> x;
    // Binary search to find the specified number
    int start = 0, end = n - 1, mid;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == x) {
            cout << "Number found at index: " << mid << endl;
            c++;
            // Continue searching in both directions
            int left = mid - 1;
            while (left >= 0 && arr[left] == x) {
                cout << "Number found at index: " << left << endl;
                left--;
                c++;            }
            int right = mid + 1;
            while (right < n && arr[right] == x) {
                cout << "Number found at index: " << right << endl;
                right++;
                c++;            }
            break; // Break the loop after finding the first occurrence
        } else if (x < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }   }
    if (c == 0) {
        cout << "The number " << x << " is not present in the array.";
    } else {
        cout << "Total occurrences: " << c;   }
    return 0;}