#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int done, code[100], i(0), no_item;
    double weekly_salary[100], hour, over, wage, gross_sale, pirce_peritem;
    string name[100];
    while (done != 0)
    {
        cout << "enter your name:";
        cin >> name[i];
        cout << "enter ur code:";
    again:
        cin >> code[i];
        switch (code[i])
        {
        case 1:
            cout << "enter ur weekly salary:";
            cin >> weekly_salary[i];
            break;
        case 2:
            cout << "what is your a fixed hourly wage:";
            cin >> wage;
            cout << "enter total hours u work in the week:";
            cin >> hour;
            over = ((hour / 7) - 40) * 7;
            weekly_salary[i] = ((hour / 7) - 40) * wage + over * 1.5;
            break;
        case 3:
            cout << "what is your gross weekly sales:";
            cin >> gross_sale;
            weekly_salary[i] = 250 + 5.7 * gross_sale;
            break;
        case 4:
            cout << "how moeny items do u produced:";
            cin >> no_item;
            cout << "enter price per the item:";
            cin >> pirce_peritem;
            weekly_salary[i] = no_item * pirce_peritem;
            break;
        default:
            cout << "u entered incorrect code enter again:";
            goto again;
            break;
        }
        cout << "Choose!\n1.Not done\n\t0.Done!";
        cin >> done;
        i++;
    }
    cout << "\n\tWeekly Pay of The Employees";
    cout << "\nName\tCode\tWeekly_pay" << endl;
    for (int j = 0; j < i; j++)
    {
        cout << name[j] << "\t" << code[j] << "\t" << weekly_salary[j] << endl;
    }
    string search;
    cout << "Enter Search Key:";
    cin >> search;
    for (int j = 0; j < i; j++)
    {
        if (name[j].rfind(search, 0) == 0)
        {
            cout << "\nName\tCode\tWeekly_pay" << endl;
            cout << setw(2) << name[j] << "\t" << setw(2) << code[j] << "\t" << setw(5) << weekly_salary[j] << endl;
        }
    }

    return 0;
}