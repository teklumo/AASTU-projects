#include <iostream>
#include <string>
#include<stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
    int n, k, rain[12], average[12], rang[12];
    string season[12] = {"MESKEREM", "TIKIMT", "HIDAR", "TAHSAS", "TIR", "YEKATIT", "MEGABIT", "MIAZIA", "GINBOT", "SENE", "HAMLE", "NEHASE"};
    cout << "what is the current season(1-12):";
    cin >> n;
    cout << "enter rainfall for:\n";
    for (int i = 0; i < 12; i++)
    {
        int m = (n - i - 2 + 12) % 12;
        cout << "\t" << season[m] << ":\n";
        cout << "\t\tAVERAGE:";
        cin >> average[m];
        cout << "\t\tACTUAL:";
        cin >> rain[m];
        rang[m] = rain[m] - average[m];
    }
menu:
    cout << "DO u went 1.TABLE\n\t2.BAR_GRAPH\n3.EXIT!:";
    cin >> k;
    if (k == 1)
        goto table;
    if (k == 2)
        goto bar;
    if(k==3){
		cout<<"see u!";
		exit(0);
	}

table:
    cout << "MONTHS\t\tACTUAL_RAIN\tAVERAGE\t\tRANGE_RAIN\n";
    for (int i = 0; i < 12; i++)
    {	if(i==0){
		cout << season[i] << "\t" << rain[i] << "\t\t" << average[i] << "\t\t" << rang[i] << endl;
	}
	else{
		cout << season[i] << "\t\t" << rain[i] << "\t\t" << average[i] << "\t\t"<< rang[i] << endl;
	}
        
    }
    goto menu;

bar:
    for (int i = 0; i < 12; i++)
    {
        cout << season[i];
        if (i == 0)
        {
            cout << ":Average|";
        }
        else
        {
            cout << "\tAverage|";
        }
        for (int j = 0; j < average[i]; j++)
        {
            cout << "*";
        }
        cout << "\n\tActual |";
        for (int j = 0; j < rain[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\t\t";
    for (int i = 0; i < 50; i++)
    {
        cout << "__";
    }
    cout << endl
         << "\t\t";
    for (int i = 0; i < 50; i++)
    {
        cout << i << " ";
    }
    cout << " T(t/2 -11)" << endl;
    goto menu;

    return 0;
}