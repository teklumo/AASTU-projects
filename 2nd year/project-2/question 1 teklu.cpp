#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int month, day, temp, m;
    double low,low_m, high, high_m, arr[12][31][3];
    for (int i = 0; i < 12; i++)
    {
        cout << "month" << i + 1 << endl;
        for (int j = 0; j < 31; j++)
        {
            cout << "\tday" << j + 1 << ":"
                 << "\n";
            cout << "\t\tenter low temp:";
            cin >> low;
            cout << "\t\tenter high:";
            cin >> high;
            arr[i][j][0] = low;
            arr[i][j][1] = high;
            arr[i][j][2] = (high + low) / 2;
        }
    }

menu:
    cout << " 1.Any day's high and low temperature\n 2.Any month high, low and average temperatures for a given month\n 3.Month and day with the highest temperature\n 4. Month and day with the lowest temperature.\n 5.All months average temperature to be printed in table format\n 6.EXIT!\n";
    cin >> m;
    if (m == 1)
        goto choose1;
    if (m == 2)
        goto choose2;
    if (m == 3)
        goto choose3;
    if (m == 4)
        goto choose4;
    if (m == 5)
        goto choose5;
    if (m == 6)
    {
        cout << "see u next time:";
        exit(0);
    }
choose1:
    cout << "enter the month:";
    cin >> month;
    cout << "which the day of month:";
    cin >> day;
    cout << "low temprature:" << arr[month - 1][day - 1][0] << endl;
    cout << "High temprature:" << arr[month - 1][day - 1][1] << endl;
    goto menu;

choose2:
    cout << "which month data do you went:";
    cin >> month;
    cout << "\t\tLow\tHigh\tAvarage" << endl;
    for (int i = 0; i < 12; i++)
    {
        if (i == month - 1)
        {
            cout << "month" << i + 1 << "\t\n";
            for (int j = 0; j < 31; j++)
            {
                cout << "\tday" << j + 1 << ":"
                     << "\t";
                for (int k = 0; k < 3; k++)
                {
                    cout << arr[i][j][k] << "\t";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    goto menu;
choose3:
    high_m = arr[0][0][0];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[i][j][k] > high_m) // may be you will think it will return the avarage but (low <= avarage <=high)
                {   
                    high_m=arr[i][j][k];
                    month = i;
                    day = j;
                }
            }
        }
    }
    cout << " day" << day + 1<< " of Month" << month + 1 << " have highest temprature!" << endl;
    day=0,month=0;
    goto menu;
choose4:
    low_m = arr[0][0][0];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[i][j][k] < low_m) // may be you will think it will return the avarage but (low <= avarage <=high)
                {
                    low_m=arr[i][j][k];
                    month = i;
                    day = j;
                }
            }
        }
    }
    cout << "day"<< day + 1 <<" of Month" << month + 1 << " have lowest temprature!" << endl;
    goto menu;
choose5:
    cout << "\t\tLow\tHigh\tAvarage" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << "month" << i + 1 << "\t\n";
        for (int j = 0; j < 31; j++)
        {
            cout << "\tday" << j + 1 << ":"
                 << "\t";
            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    goto menu;

    return 0;
}
