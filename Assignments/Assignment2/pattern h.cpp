#include <iostream>
using namespace std;
int main()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5 - i - 1; j++)
    {
      cout << " ";
    }
    int num = 1;
    for (int k = 0; k < 2 * i + 1; k++)
    {
      if (i == 0 || i == 5 - 1)
      {
        cout << num++;
      }
      else
      {
        if (k == 0 || k == 2 * i)
        {
          cout << num++;
        }
        else
        {
          cout << " ";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}