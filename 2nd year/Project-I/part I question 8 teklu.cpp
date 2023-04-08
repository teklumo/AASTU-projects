#include<iostream>
#include <cmath>
using namespace std;
int main() {
  int infant(0),child(0),teenager(0),adult(0),num,ticket_sales(0);
  cout<<"Enter your identification number:";
  cin>>num;
  while(num>=0){
    switch(num){
        case 1:
            ticket_sales+=5;
            infant++;
            break;
        case 2:
            ticket_sales+=10;
            child++;
            break;
        case 3:
            ticket_sales+=20;
            teenager++;
            break;
        case 4:
            ticket_sales+=20;
            adult++;
            break;
    }
    cout<<"Enter your identification number:";
    cin>>num;
  }
  cout<<"TOTAL_PEOPLE_ATTEND="<<infant+child+teenager+adult<<endl;
  cout<<"TOTAL_TICKET_SALES="<<ticket_sales<<endl;
  cout<<"NUMBER_OF_INFANT="<<infant<<endl;
  cout<<"NUMBER_OF_CHILD="<<child<<endl;
  cout<<"NUMBER_OF_TEENAGER="<<teenager<<endl;
  cout<<"NUMBER_OF_ADULT="<<adult<<endl;

  return 0;

}