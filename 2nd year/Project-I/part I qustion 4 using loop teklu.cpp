#include <iostream>
#include<cmath>
using namespace std;

int main() {
  char ch,hexa[70];
  int num,binary(0),octal(0),decimal(0),rev(0),i(0);
  cout<<"What is your input \n a.decimal \n b.binary \n c.octal \n d.hexadecimal";
  cin>>ch;
  if(ch=='a')goto a;
    a:
    cout<<"enter num:";
    cin>>num;
    cout<<"decimal"<<'\t'<<"binary"<<'\t'<<"octal"<<'\t'<<"hexadecimal"<<endl;
    cout<<num<<'\t';
    int original=num;
    while(original!=0){
      int rem=original%2;
      binary=binary*10 + rem*10;
      original=original/2;
    }
    while(binary!=0){
      int rem=binary%10;
      rev=rev*10+rem*10;
      binary=binary/10;
    }
   binary=rev/10;
   rev=0;
   cout<<binary<<'\t';
   original=num;
   while(original!=0){
    int rem=original%8;
     octal=octal*10 + rem*10;
     original=original/8;
   }
   while(octal!=0){
    int rem=octal%10;
    rev=rev*10 +rem*10;
    octal=octal/10;
   }
   octal=rev/10;
   rev=0;
   cout<<octal<<'\t';
   original=num;
    while(original!=0){
      int rem=original%16;
      if(rem<10){
        rem=rem+48;
      }
      else if(rem>10){
        rem=rem+55;
      }
      hexa[i]=rem;
      i++;
      original/=16;
    }
    for(int j=i-1;j>=0;j--){
     cout<<hexa[j];
    }
    return 0;
}