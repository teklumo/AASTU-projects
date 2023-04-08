#include <iostream>
#include<stdlib.h>
#include<cmath>
#include<string>
using namespace std;
int main(){	
	int decimal(0),binary[100],binary2(0),octal[100],octal2(0);
    int j=0,k=0,l=0,original;
    char hexadecimal[100],ch;
    string hexadecimal2;
    cout<<"What is your input \n a.decimal \n b.binary \n c.octal \n d.hexadecimal";
    cin>>ch;
    if(ch=='a')goto a;
    if(ch=='b')goto b;
    if(ch=='c')goto c;
    if(ch=='d')goto d;
    a:
    cout<<"enter numebr:";
    cin>>decimal;
     original=decimal;
    for(int i=0;decimal!=0;i++){
        binary[i]=decimal%2;
        decimal/=2;
        j++;
    }
    decimal=original;
    for(int i=0;decimal!=0;i++){
        octal[i]=decimal%8;
        decimal/=8;
        k++;
    }
    decimal=original;
    for(int i=0;decimal!=0;i++){
        if(decimal%16>=10){
            hexadecimal[i]=(decimal%16)+55;
        }
        else{
            hexadecimal[i]=(decimal%16)+48;
        }
        decimal/=16;
        l++;
        
    }
     cout<<"binary:";
    for(int i=j-1;i>=0;i--){
       cout<<binary[i];
    }
    cout<<"\noctal:";
    for(int i=k-1;i>=0;i--){
      cout<<octal[i];
    }
    cout<<"\nhexa:";
    for(int i=l-1;i>=0;i--){
        cout<<hexadecimal[i];
    }
    exit(0);
    b:
    cout<<"enter biary:";
    cin>>binary2;
    original=binary2;
    while(binary2!=0){
        int n=log10(binary2);
        int m=pow(10,n);
        int num=binary2/(pow(10,n));
        decimal+=num*(pow(2,(n)));
        binary2%=m;
    }
    cout<<"decimal:"<<decimal;
    original=decimal;
    for(int i=0;decimal!=0;i++){
        octal[i]=decimal%8;
        decimal/=8;
        k++;
    }
    decimal=original;
    for(int i=0;decimal!=0;i++){
        if(decimal%16>=10){
            hexadecimal[i]=(decimal%16)+55;
        }
        else{
            hexadecimal[i]=(decimal%16)+48;
        }
        decimal/=16;
        l++;
        
    }
    cout<<"\noctal:";
    for(int i=k-1;i>=0;i--){
      cout<<octal[i];
    }
    cout<<"\nhexa:";
    for(int i=l-1;i>=0;i--){
        cout<<hexadecimal[i];
    }
    exit(0);
    c:
    cout<<"enter octal:";
    cin>>octal2;
    while(octal2!=0){
        int n=log10(octal2);
        int m=pow(10,n);
        int num=octal2/(pow(10,n));
        decimal+=num*(pow(8,(n)));
        octal2%=m;
    }
    cout<<"decimal:"<<decimal;
    original=decimal;
    for(int i=0;decimal!=0;i++){
        binary[i]=decimal%2;
        decimal/=2;
        j++;
    }
    decimal=original;
    for(int i=0;decimal!=0;i++){
        octal[i]=decimal%8;
        decimal/=8;
        k++;
    }
    decimal=original;
    for(int i=0;decimal!=0;i++){
        if(decimal%16>=10){
            hexadecimal[i]=(decimal%16)+55;
        }
        else{
            hexadecimal[i]=(decimal%16)+48;
        }
        decimal/=16;
        l++;
        
    }
     cout<<"\nbinary:";
    for(int i=j-1;i>=0;i--){
       cout<<binary[i];
    }
    cout<<"\nhexa:";
    for(int i=l-1;i>=0;i--){
        cout<<hexadecimal[i];
    }
    
    exit(0);
    d:
    cout<<"enter hexa:";
    cin>>hexadecimal2;
    int length=hexadecimal2.length();
    cout<<length;
    for(int i=0;i<length;i++){
        if((hexadecimal2[i])>='1' && (hexadecimal2[i])<='9'){
            decimal+=(hexadecimal2[i]-48)*(pow(16,length-(i+1)));
        }
        else{
            decimal+=(int(hexadecimal2[i])-87)*(pow(16,length-(i+1)));
        }
        
    }
    cout<<"decimal:"<<decimal;
    original=decimal;
    for(int i=0;decimal!=0;i++){
        binary[i]=decimal%2;
        decimal/=2;
        j++;
    }
    decimal=original;
    for(int i=0;decimal!=0;i++){
        octal[i]=decimal%8;
        decimal/=8;
        k++;
    }
     cout<<"\nbinary:";
    for(int i=j-1;i>=0;i--){
       cout<<binary[i];
    }
    cout<<"\noctal:";
    for(int i=k-1;i>=0;i--){
      cout<<octal[i];
    }
    
    exit(0);


		
	
    return 0;
}