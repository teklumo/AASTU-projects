#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, count(0);
    double sum(0), average;
    bool prime = true;
    cout << "Enter N:";
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = false;
        }
    }
    if (prime)
        goto a;
    else
        goto b;
a:
    for (int i = 2; i < n; i++)
    {
        bool ppr = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                ppr = false;
            }
        }
        if (ppr)
        {
            sum = sum + i;
            count++;
        }
    }
    average = sum / count;
    cout << "The average of prime numbers between 1 and N:" << average;
    exit(0);
b:
    cout << "All prime factors of N are:";
    for (int i = 2; i < n; i++)
    {
        bool ppr = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                ppr = false;
            }
        }
        if (ppr)
        {
            if (n % i == 0)
            {
                cout << i << ",";
            }
        }
    }

    return 0;
}
