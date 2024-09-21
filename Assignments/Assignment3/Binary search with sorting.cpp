#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num, start = 0, mid, end = size - 1, count = 0;
    int arr[size];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Sorting the array in ascending order
    for (int j = 0; j < size - 1; j++)
    {
        for (int k = j + 1; k < size; k++)
        {
            if (arr[k] < arr[j])
            {
                int temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Check if the array is sorted
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "Error: Array is not sorted in ascending order." << endl;
            return 1;
        }
    }

    cout << "Sorted array in ascending order is: ";
    for (int l = 0; l < size; l++)
    {
        cout << arr[l] << " ";
    }

    cout << endl;

    // Binary Search
    cout << "Enter Value to Search: ";
    cin >> num;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == num)
        {
            cout << "Value found at Index: " << mid << endl;
            count++;

            // Check for duplicates on the left side
            for (int i = mid - 1; i >= 0 && arr[i] == num; i--)
            {
                cout << "Value found at Index: " << i << endl;
                count++;
            }

            // Check for duplicates on the right side
            for (int i = mid + 1; i < size && arr[i] == num; i++)
            {
                cout << "Value found at Index: " << i << endl;
                count++;
            }

            break; // Exit the loop after finding the value
        }
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (count == 0)
    {
        cout << "Value not found in the array." << endl;
    }

    cout << "Value Duplicated in Array " << count << " Times";

    return 0;
}
