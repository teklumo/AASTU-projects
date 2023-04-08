#include<iostream>
#include <cmath>
using namespace std;
int main() {
  int day, month, year;
  cout << "Please enter a date (dd mm yyyy):";
  cin >> day >> month >> year;
  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (day > 0 && day <= 31) {
      if ((year % 400 == 0) || (year % 400 != 0 && year % 100 != 0 && year % 4 == 0)) {
        cout << day << "/" << month << "/" << year << " is a valid date and also a Leap Year. '\n' Here is below the next twenty Leap years are:" << endl;
        for (int i = year + 4; i <= (year + 4 * 21); i = i + 4) {
          if ((i % 400 == 0) || (i % 400 != 0 && i % 100 != 0 && i % 4 == 0))
            cout << i << ",";
        }
      } 
      else {
        cout << day << "/" << month << "/" << year << " is a valid date but not a Leap Year:";
      }
    } 
    else {
     cout << "Invalid day of month " << day;
    }
     break;
     case 2:
     if ((year % 400 == 0) || (year % 400 != 0 && year % 100 != 0 && year % 4 == 0)){
        if(day>0 && day<=29){
            cout << day << "/" << month << "/" << year << " is a valid date and also a Leap Year. '\n' Here is below the next twenty Leap years are:" << endl;
        for (int i = year + 4; i <= (year + 4 * 21); i = i + 4) {
          if ((i % 400 == 0) || (i % 400 != 0 && i % 100 != 0 && i % 4 == 0))
            cout << i << ",";
        }
        }
        else{
                cout << "Invalid day of month " << day;
        }
     }
     else{
        if(day>0 && day<=28){
             cout << day << "/" << month << "/" << year << " is a valid date but not a Leap Year:";
        }
        else{
           cout << "Invalid day of month " << day; 
        }

     }
      break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(day>0 && day<=30){
            if ((year % 400 == 0) || (year % 400 != 0 && year % 100 != 0 && year % 4 == 0)) {
        cout << day << "/" << month << "/" << year << " is a valid date and also a Leap Year. '\n' Here is below the next twenty Leap years are:" << endl;
        for (int i = year + 4; i <= (year + 4 * 21); i = i + 4) {
          if ((i % 400 == 0) || (i % 400 != 0 && i % 100 != 0 && i % 4 == 0))
            cout << i << ",";
         }
         } 
         else {
         cout << day << "/" << month << "/" << year << " is a valid date but not a Leap Year:";
         }
         }
         else{
            cout << "Invalid day of month " << day;

         }
         break;
    default:
        cout << "Invalid month:" << month;
         break;
    }

  return 0;

}