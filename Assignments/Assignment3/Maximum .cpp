#include <iostream>
using namespace std;
int main()
{
    int mx = 0;
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << "Maximum number is: " << mx << endl;
}