#include <iostream>
using namespace std;
int main() {
   int productNumber, quantitySold;
   double totalRetailValue = 0.0;
   cout << "Enter product number(1-5 or 0 to end): ";
   cin >> productNumber;  
   while (productNumber != 0) {
    cout<<"Enter quantity:";
    cin>>quantitySold;   
	double price;
    switch (productNumber) {
    case 1:
    price = 2.98;
    break;
    case 2:
    price = 4.50;
    break;
    case 3:
    price = 9.98;
    break;
    case 4:
    price = 4.49;
    break;
    case 5:
    price = 6.87;
    break;
    default:
    cout << "Invalid product number." << endl;
    price = 0.0;
    }

    totalRetailValue += price * quantitySold;
    cout << "Enter product number(1-5 or 0 to end): ";
    cin >> productNumber;
    cout<<"Enter quantity:";
    cin>>quantitySold;
   }
   cout << "Total retail value of all products sold: $" << totalRetailValue << endl;
   return 0;
}