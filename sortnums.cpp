#include <iostream>
using namespace std;
int main()
{
  const int nums = 10;
  int a, b, index;
  double raw[nums], sorted[nums], min = 1.e5;
  for (a = 0; a < nums; a++)
  {
    cout << "Enter value # " << (a + 1) << ": ";
    cin >> raw[a];
  }
  for (a = 0; a < nums; a++)
  {
    for (b = 0; b < nums; b++)
    {
      if (raw[b] < min)
      {
        min = raw[b];
        index = b;
      }
    }
    sorted[a] = min;
    min = 1.e5;
    index = 1.e7;
  }
    cout << "The numbers in sorted order are:\n";
    for (a = 0; a < nums; a++)
    {
    cout << sorted[a] << endl;
    }
    return 0;
}

