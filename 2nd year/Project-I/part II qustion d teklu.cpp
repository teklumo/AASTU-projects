#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter:";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < (n + 1) - i; j++)
    {
      cout << char(j + 65) << " ";
    }
    for (int j = (n - 1) - i; j >= 0; j--)
    {
      cout << char(j + 65) << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < (n + 1); i++)
  {
    for (int j = (n + 1) - i; j > 0; j--)
    {
      cout << " ";
    }
    for (int j = (n + 1) - i; j > 0; j--)
    {
      cout << " ";
    }
    for (int j = 0; j < i; j++)
    {
      cout << char(j + 65) << " ";
    }
    for (int j = i; j >= 0; j--)
    {
      cout << char(j + 65) << " ";
    }
    cout << endl;
  }
  return 0;
}
