#include<iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int space = i; space < 5; space++)
    {
    cout << " ";
    }
    
    for (int j = 1; j <= (2 * i-1); j++)
    {
    if (i == 5 || j == 1 || j == (2 * i-1))
    cout << "*";
    else
    cout << " ";
    }
    cout << endl; 
  }
  return 0;
}
