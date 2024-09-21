#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    int arr[n][m];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i <n; ++i)
    {
    	 for (int j = 0; j < m; ++j)
    	 {
    	 	 cin >> arr[i][j];
		 }
	}
	
	cout<<"Matrix is "<<endl;
    for (int i = 0; i < n; ++i)    {
  	    for (int j = 0; j < m; ++j)    {
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
	}
    cout << "\nSum of each row:\n";
    for (int i = 0; i <n; ++i) 	{
        int rowSum = 0;
        for (int j = 0; j < m; ++j)
            rowSum += arr[i][j];
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
    cout << "\nSum of each column:\n";
    for (int j = 0; j < m; ++j) {
        int colSum = 0;
        for (int i = 0; i < n; ++i)
            colSum += arr[i][j];
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
    if (n == m) 	{
        int diagonalSum = 0;
        for (int i = 0; i < n; ++i)
            diagonalSum += arr[i][i];
        cout << "\nSum of diagonal elements: " << diagonalSum << endl;
    }
    return 0;
}