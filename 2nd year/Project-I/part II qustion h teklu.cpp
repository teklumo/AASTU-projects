#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << j << " ";
            }
            for (int j = 0; j <= 8 - i; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= 8 - i; j++)
            {
                cout << "  ";
            }
            for (int j = i; j >= 0; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j <= 9; j++)
            {
                cout << j << " ";
            }
            for (int j = 8; j >= 0; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 8 - i; j++)
        {
            cout << j << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 8 - i; j >= 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}