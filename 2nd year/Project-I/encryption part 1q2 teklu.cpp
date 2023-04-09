#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    int num, enc(0), a1, a2, a3, a4, dec(0);
    char ch;
    cout << "a.encryption \n b.decryption \n choose what do you went";
    cin >> ch;
    if (ch == 'a')
        goto aa;
    if (ch == 'b')
        goto bb;
aa:
    cout << "enter the num:";
    cin >> num;
    while (num != 0)
    {
        int n = log10(num);
        int rem = num / pow(10, n);
        enc = enc * 10 + ((rem + 7) % 10);
        num = num - rem * pow(10, n);
    }
    a1 = enc / 1000;
    a2 = (enc % 1000) / 100;
    a3 = (enc % 100) / 10;
    a4 = enc % 10;
    enc = a3 * 1000 + a2 * 100 + a1 * 10 + a4;
    cout << "The encrypted:" << enc;
    exit(0);
bb:
    cout << "enter the nnum:";
    cin >> num;
    int m = 3;
    while (num != 0)
    {

        int rem = num / pow(10, m);
        int g = (rem - 7);
        if (g < 0)
        {
            g = g + 10;
        }
        dec = dec * 10 + g % 10;
        num = num - rem * pow(10, m);
        m--;
    }
    a1 = dec / 1000;
    a2 = (dec % 1000) / 100;
    a3 = (dec % 100) / 10;
    a4 = dec % 10;
    dec = a3 * 1000 + a2 * 100 + a1 * 10 + a4;
    cout << "The decrypted:" << dec;
    exit(0);
    return 0;
}
