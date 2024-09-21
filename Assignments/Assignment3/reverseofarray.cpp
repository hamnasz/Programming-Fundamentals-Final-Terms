#include <iostream>

using namespace std;

int main() {
   int arr[5];

   // Get 5 elements from the user
   cout << "Enter 5 array elements: ";
   for (int i = 0; i < 5; ++i) {
       cin >> arr[i];
   }

   /*i ki value 0 and j ki value 4 
   i chutta hy j sy lekin j ka nh btana k j kis sy chutta hy
   i me pre increament kerna hy
   j me pre decrement kerna hy*/
   
   for (int i = 0, j = 4; i < j; ++i, --j) { 
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
   }

   // Print the reversed array
   cout << "Reversed array: ";
   for (int i = 0; i < 5; ++i) {
       cout << arr[i] << " ";
   }

   cout << endl;

   return 0;
}