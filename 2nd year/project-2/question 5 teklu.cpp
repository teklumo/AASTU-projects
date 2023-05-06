#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string id[10], sub_name[10], grade[10][10], search;
    float mark[10][10], mmark, average[10], ccpa[10], n, m, clor, cclor, sum;
    cout << "number of students:";
    cin >> n;
    cout << "number of courses are they taking :";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "enter course" << i + 1 << "name:";
        cin >> sub_name[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        cclor = 0;
        mmark = 0;
        cout << "enter id of student " << i + 1 << ":";
        cin >> id[i];
        for (int j = 0; j < m; j++)
        {
            cout << "\tmark of course " << j + 1 << ":";
            cin >> mark[i][j];
            cout << "\tcredit hour for mark" << j + 1 << ":";
            cin >> clor;
            if (mark[i][j] >= 85)
            {
                grade[i][j] = "A+";
                sum = sum + clor * 4;
            }
            else if (mark[i][j] >= 75)
            {
                grade[i][j] = "B+";
                sum = sum + clor * 3.5;
            }
            else if (mark[i][j] >= 70)
            {
                grade[i][j] = "B";
                sum = sum + clor * 3;
            }
            else if (mark[i][j] >= 60)
            {
                grade[i][j] = "C+";
                sum = sum + clor * 2.5;
            }
            else if (mark[i][j] >= 50)
            {
                grade[i][j] = "C";
                sum = sum + clor * 2;
            }
            else if (mark[i][j] >= 40)
            {
                grade[i][j] = "D";
                sum = sum + clor * 1.5;
            }
            else
            {
                grade[i][j] = "F";
                sum = sum + clor * 0;
            }
            cclor = cclor + clor;
            mmark = mmark + mark[i][j];
        }
        average[i] = mmark / m;
        ccpa[i] = sum / cclor;
    }
    cout << "         student's mark sheet       " << endl;
    cout << "stud.Id\t\t";
    for (int i = 0; i < m; i++)
    {
        cout << sub_name[i] << "\t\t";
    }
    cout << "AVERAGE\t\tCGPA";
    cout << "\n\t\t";
    for (int i = 0; i < m; i++)
    {
        cout << "Mark:Grade\t";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << id[i] << "\t\t";
        for (int j = 0; j < m; j++)
        {
            cout << setw(3) << mark[i][j] << ":" << grade[i][j] << "\t\t";
        }
        cout << setw(2) << average[i] << "\t\t" << setw(2) << ccpa[i] << endl;
    }
    cout << "enter the ID of student that u went search:";
    cin >> search;
    cout << "stud.Id\t\t";
    for (int i = 0; i < m; i++)
    {
        cout << sub_name[i] << "\t\t";
    }
    cout << "AVERAGE\t\tCGPA";
    cout << "\n\t\t";
    for (int i = 0; i < m; i++)
    {
        cout << "Mark:Grade\t";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (id[i] == search)
        {
            cout << id[i] << "\t\t";
            for (int j = 0; j < m; j++)
            {
                cout << setw(3) << mark[i][j] << ":" << grade[i][j] << "\t\t";
            }
            cout << setw(2) << average[i] << "\t\t" << setw(2) << ccpa[i] << endl;
        }
    }
}