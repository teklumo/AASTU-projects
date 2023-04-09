#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "enter size:";
    cin >> n;
    for (int i = 0; i < (n / 2); i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < (n / 2) + 1; j++)
            {
                cout << char(j + 65) << " ";
            }
            for (int j = (n / 2) - 1; j >= 0; j--)
            {
                cout << char(j + 65) << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < (n / 2) + 1 - i; j++)
            {
                cout << char(j + 65) << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "  ";
            }
            for (int j = 2; j <= i; j++)
            {
                cout << "  ";
            }
            for (int j = (n / 2) - i; j >= 0; j--)
            {
                cout << char(j + 65) << " ";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < (n / 2) + 1; i++)
    {
        if (i < (n / 2))
        {
            for (int j = 0; j <= i; j++)
            {
                cout << char(j + 65) << " ";
            }
            for (int j = (n / 2) - 1 - i; j >= 0; j--)
            {
                cout << "  ";
            }
            for (int j = (n / 2) - 2 - i; j >= 0; j--)
            {
                cout << "  ";
            }
            for (int j = i; j >= 0; j--)
            {
                cout << char(j + 65) << " ";
            }
            cout << endl;
        }
        else if (i == (n / 2))
        {
            for (int j = 0; j < (n / 2) + 1; j++)
            {
                cout << char(j + 65) << " ";
            }
            for (int j = (n / 2) - 1; j >= 0; j--)
            {
                cout << char(j + 65) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
