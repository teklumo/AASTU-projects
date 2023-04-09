#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            for (int j = i; j < 8; j++)
            {
                cout << char(j + 65)<<" ";
            }
            for (int k = i + 6; k >= 0; k--)
            {
                cout << char(k + 65)<<" ";
            }
            cout << endl;
        }
        for (int k = 0; k <= 6 - i; k++)
        {
            cout << char(k + 65)<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int m = 6 - i; m >= 0; m--)
        {
            cout << char(m + 65)<<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i + 1; j++)
        {
            cout << char(j + 65)<<" ";
        }
        for (int k = 6 - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int k = 6 - i; k > 1; k--)
        {
            cout << "  ";
        }
        for (int m = i + 1; m >= 0; m--)
        {
            cout << char(m + 65)<<" ";
        }
        cout << endl;
        if (i == 5)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << char(j + 65)<<" ";
            }
            for (int k = 6; k >= 0; k--)
            {
                cout << char(k + 65)<<" ";
            }
            cout << endl;
        }
    }

    return 0;
}
