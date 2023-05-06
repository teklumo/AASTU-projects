#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int n, max_e(31), max_f(1), passport_no[100], age[100], seat_no[100];
    string name[100], sex[100], position[100], response;
    for (int i = 0; i < 100; i++)
    {
        cout << "MENU\n Please type\n \t1.FOR FIRST CLASS\n\t2.FOR ECONOMIC CLASS:";
        cin >> n;
        if (n == 1)
            goto first;
        if (n == 2)
            goto economic;
    first:
        if (max_f <= 30)
        {
            cout << "\tenter your name:";
            cin >> name[i];
            cout << "\tenter your sex:";
            cin >> sex[i];
            cout << "\tenter your age:";
            cin >> age[i];
            cout << "\tenter your pasport number:";
            cin >> passport_no[i];
            seat_no[i] = i + 1;
            position[i] = "FIRST_CLASS";
            cout << "\n\tNAME:" << name[i] << "\n\tSEX:" << sex[i] << "\n\tAGE:" << age[i] << "\n\tPASSPORT NUMBER:" << passport_no[i] << "\n\tPOSITION:" << position[i];
            cout << "\n\t\t you have sucessfully get your bordingpass!\n"
                 << endl;
            max_f++;
        }
        else
        {
            cout << "Sorry! the first class is full can i assign you in economic class \"YES\"\\\"NO\":";
            cin >> response;
            if (response == "yes")
                goto economic;
            if (response == "no")
            {
                cout << "\nNext flight leaves in 3 hours.\n";
                --i;                 //--i used because we have to get 100 persons 
            }
        }
        goto end;
    economic:
        if (max_e <= 100)
        {
            cout << "\tenter your name:";
            cin >> name[i];
            cout << "\tenter your sex:";
            cin >> sex[i];
            cout << "\tenter your age:";
            cin >> age[i];
            cout << "\tenter your pasport number:";
            cin >> passport_no[i];
            seat_no[i] = i + 1;
            position[i] = "ECONOMIC_CLASS";
            cout << "\n\tNAME:" << name[i] << "\n\tSEX:" << sex[i] << "\n\tAGE:" << age[i] << "\n\tPASSPORT NUMBER:" << passport_no[i] << "\n\tPOSITION:" << position[i];
            cout << "\n\t\t you have sucessfully get your bordingpass!\n"
                 << endl;
            max_e++;
        }
        else
        {
            cout << "Sorry! the first class is full can i assign you in economic class \"YES\"\\\"NO\":";
            cin >> response;
            if (response == "yes")
                goto first;
            if (response == "no")
            {
                cout << "\nNext flight leaves in 3 hours.\n";
                --i;
            }
        }
    end:
        cout << "\0";
    }
    cout<<"\nSorry,the plain is full!";

    return 0;
}