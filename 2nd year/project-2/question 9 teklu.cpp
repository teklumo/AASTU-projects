#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
    int i(0), interest, account[100], account1, amount[100], amount1, begin(1001), count(0);
    char type;
    string manpin = "12pin", pin;
    cout << "Transaction type to open the bank?";
    cin >> type;
    if (type == 'S' || type == 's')
    {
        cout << "enter pin:";
        man:
        cin >> pin;
        if (pin == manpin)
        {
            cout << "WELLCOME!the bank is open now \n";
        menu:
            cout << "\nTransaction type?:";
            cin >> type;

            if (type == 'o' || type == 'O')
            {

                if (i < 100)
                {
                    cout << " Initial deposit?";
                    cin >> amount[i];
                    account[i] = begin;
                    cout << "new account:" << account[i] << "\n";
                    cout << "amount:" << amount[i] << endl;
                    i++;
                    begin++;
                    
                }
                else
                {
                    cout << "sorry!the bank is full.";
                }
                goto menu;
            }
            else if (type == 'b' || type == 'B')
            {
                cout << "Account number?";
                cin >> account1;
                for (int k = 0; k < 100; k++)
                {
                    if (account[k] == account1)
                    {
                        cout << "account number:" << account1 << endl;
                        cout << "balance:" << amount[k] << endl;
                    
                    }
                }
                goto menu;
            }
            else if (type == 'D' || type == 'd')
            {
                cout << "account_number?";
                cin >> account1;
                for (int k = 0; k < 100; k++)
                {
                    if (account[k] == account1)
                    {
                        cout << "Amount?";
                        cin >> amount1;
                        amount[k] = amount[k] + amount1;
                        cout << "account number:" << account[k] << endl;
                        cout << "new_balance:" << amount[k] << endl;
                    }
                }
                goto menu;
            }
            else if (type == 'w' || type == 'W')
            {
                cout << "account number?";
                cin >> account1;
                for (int k = 0; k < 100; k++)
                {
                    if (account[k] == account1)
                    {
                    again:
                        cout << "Amount?";
                        cin >> amount1;
                        if (amount[k] >= amount1)
                        {
                            amount[k] = amount[k] - amount1;
                            cout << "account number:" << account[k] << endl;
                            cout << "new_balance:" << amount[k] << endl;
                        }
                        else
                        {
                            cout << "insufficient amount left enter another amount:";
                            goto again;
                        }
                    }
                }
                goto menu;
            }
            else if (type == 'C' || type == 'c')
            {
                cout << "account number?";
                cin >> account1;
                for (int k = 0; k < 100; k++)
                {
                    if (account[k] == account1)
                    {
                        account[k] = '\0';
                        cout << "the account is closed successfully!";
                        goto menu;
                    }
                }
                cout << "incorrect account number!";
                goto menu;
            }
            else if (type == 'I' || type == 'i')
            {
                cout << "enter pin:";
            pin:
                cin >> pin;
                if (pin == manpin)
                {
                    cout << "Interest rate?";
                    cin >> interest;
                    for (int k = 0; k < 100; k++)
                    {
                        amount[k] += amount[k] * interest * 0.01;
                    }
                }
                else
                {
                    cout << "enter the correct pin!";
                    goto pin;
                }
                goto menu;
            }
            else if (type == 'P' || type == 'p')
            {
                cout << "enter pin:";

                cin >> pin;
                if (pin == manpin)
                {
                    cout << "\nACCOUNT_NO\tBALANCE\n";
                    for (int k = 0; k < 100; k++)
                    {
                        cout << account[k] << "\t" << amount[k] << endl;
                    }
                }
                else
                {
                    cout << "incorrect pin!";
                }
                goto menu;
            }
            else if (type == 'E' || type == 'e')
            {
                cout << "enter pin:";

                cin >> pin;
                if (pin == manpin)
                {
                    cout << "see u!";
                    exit(0);
                }
                else
                {
                    cout << "incorrect pin!";
                }
                goto menu;
            }
            else {
                cout<<"incorrect transaction type:";
                goto menu;
            }
        }
        else{
            cout << "enter the correct pin!";
            goto man;
        }
    }

    return 0;
}