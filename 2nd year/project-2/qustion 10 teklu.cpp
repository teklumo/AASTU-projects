#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
int main()
{
    int score[20], tr_fa, choose, shortn,n,temp4;
    double per;
   
    char test_answer2[20], student_data2[150][20], grade[150],temp2;
    string test_answer1[20], student_data1[150][20], student_data3[150][20], test_answer3[20], search,temp,temp3;

    cout << "how many true\\false questions do u have:";
    cin >> tr_fa;
    cout << "how many choose questions do u have:";
    cin >> choose;
    cout << "how many short answer questions do u have:";
    cin >> shortn;
    for (int i = 0; i < 20; i++)
    {
        if (i < tr_fa)
        {
            cout << "enter the answer for true\\false question " << i + 1 << ":";
            cin >> test_answer1[i];
        }
        else if (i < 20 - shortn)
        {
            cout << "enter the answer for choose qustion " << i + 1 << ":";
            cin >> test_answer2[i];
        }
        else
        {
            cout << "enter the answer for short answer question  " << i + 1 << ":";
            cin >> test_answer3[i];
        }
    }
    for (int i = 0; i < 150; i++)
    {
        score[i] = 0;
        cout << "enter student" << i + 1 << " ID:";
        cin >> student_data1[i][0];
        for (int j = 1; j < 21; j++) // 21 because i went also accept ID at the same time
        {
            if (j < tr_fa + 1)
            {
                cout << "enter the answer for true\\false question " << j << ":";
                cin >> student_data1[i][j];
                if (student_data1[i][j] == test_answer1[j - 1])
                {
                    score[i] += 2;
                }
                else
                {
                    score[i] += 1;
                }
            }
            else if (j < 21 - shortn)
            {
                cout << "enter the answer for choose question " << j << ":";
                cin >> student_data2[i][j];
                if (student_data2[i][j] == test_answer2[j - 1])
                {
                    score[i] += 2;
                }
                else
                {
                    score[i] += 1;
                }
            }
            else
            {
                cout << "enter the answer for short answer question " << j << ":";
                cin >> student_data3[i][j];
                if (student_data3[i][j] == test_answer3[j - 1])
                {
                    score[i] += 2;
                }
                else
                {
                    score[i] += 1;
                }
            }
        }
        /*per = ((score[i])/ 40);
        per=per * 100;*/

        if ((score[i]) >= 36)
        {
            grade[i] = 'A';
        }
        else if ((score[i]) >= 32)
        {
            grade[i] = 'B';
        }
        else if ((score[i]) >= 28)
        {
            grade[i] = 'C';
        }
        else if ((score[i]) >= 24)
        {
            grade[i] = 'D';
        }
        else if ((score[i]) >= 0)
        {
            grade[i] = 'F';
        }
    }
    menu: 
    cout<<"1.DISPLAY\n2.SEARCH for spesfic student\n3.TOP 5 STUDENTS\n4.EXIT(0):";
    cin>>n;
    if(n==1)goto dis;
    if(n==2)goto search;
    if(n==3)goto top;
    if (n==4){
        cout<<"see u!";
        exit(0);
    }
    dis:
    cout << "ID\t";
    for (int i = 0; i < 20; i++)
    {
        cout << "Ans" << i + 1 << "\t";
    }
    cout << "Score\tGrade" << endl;
    for (int i = 0; i < 150; i++)
    {

        cout << student_data1[i][0]<<"\t";
        for (int j = 1; j < 21; j++)
        {
            if (j < tr_fa + 1)
            {
                cout << student_data1[i][j] << "\t";
            }
            else if (j < 21 - shortn)
            {
                cout << student_data2[i][j] << "\t";
            }
            else
            {
                cout << student_data3[i][j] << "\t";
            }
        }
        cout << score[i] << "\t" << grade[i] << endl;
    }
    goto menu;
    search:
    cout << "\nwhich student do you went to search:";
    cin >> search;
    for (int i = 0; i < 150; i++)
    {
        if (search == student_data1[i][0])
        {
            cout << "ID\t";
            for (int k = 0; k< 20; k++)
            {
                cout << "Ans" << k + 1 << "\t";
            }
            cout << "Score\tGrade" << endl;
            cout << student_data1[i][0]<<"\t";
            for (int j = 1; j < 21; j++)
            {
                if (j < tr_fa + 1)
                {
                    cout << student_data1[i][j] << "\t";
                }
                else if (j < 21 - shortn)
                {
                    cout << student_data2[i][j] << "\t";
                }
                else
                {
                    cout << student_data3[i][j] << "\t";
                }
            }
            cout << score[i] << "\t" << grade[i] << endl;
        }
    }
    goto menu;
    top:
    for(int i=0;i<150;i++){
        for(int k=i+1;k<150;k++){
            
            if(score[k]>score[i]){
                 temp=student_data1[i][0];
                student_data1[i][0]=student_data1[k][0];
                student_data1[k][0]=temp;
                for(int j=1;j<21;j++){
                    if (j < tr_fa + 1)
                {
                    temp= student_data1[i][j];
                    student_data1[i][j]=student_data1[k][j];
                    student_data1[k][j]=temp;
                }
                else if (j < 21 - shortn)
                {
                    temp2= student_data2[i][j];
                    student_data2[i][j]=student_data2[k][j];
                    student_data2[k][j]=temp2;
                    
                }
                else
                {
                    temp3= student_data3[i][j];
                    student_data3[i][j]=student_data3[k][j];
                    student_data3[k][j]=temp;
                }


                }

             temp4=score[i];
            score[i]=score[k];
            score[k]=temp4;
            temp2=grade[i];
            grade[i]=grade[k];
            grade[k]=temp2;
            }
           

        }
        
    }
    cout << "ID\t";
    for (int i = 0; i < 20; i++)
    {
        cout << "Ans" << i + 1 << "\t";
    }
    cout << "Score\tGrade" << endl;
    for (int i = 0; i < 150; i++)
    {

        cout << student_data1[i][0]<<"\t";
        for (int j = 1; j < 21; j++)
        {
            if (j < tr_fa + 1)
            {
                cout << student_data1[i][j] << "\t";
            }
            else if (j < 21 - shortn)
            {
                cout << student_data2[i][j] << "\t";
            }
            else
            {
                cout << student_data3[i][j] << "\t";
            }
        }
        cout << score[i] << "\t" << grade[i] << endl;
    }
    goto menu;


    return 0;
}