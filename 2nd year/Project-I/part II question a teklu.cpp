#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter n";
cin>>n;
for(int i=0;i<((n/2)-1);i++){
    if(i==0){
        for(int j=0;j<(n/2);j++){
            cout<<j;
        }
        cout<<" ";
        for(int j=(n/2);j>=0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    for(int j=0;j<((n/2))-i;j++){
        cout<<j;
    }
   
    for(int m=0;m<=i;m++){
        cout<<"  ";
    }
    for(int j=((n/2)-1)-i;j>=0;j--){
        cout<<j;
    }
    cout<<endl;
}
for(int i=0;i<n/2;i++){
    for(int j=0;j<i+1;j++){
        cout<<j;
    }
    for(int k=n/2-i;k>0;k--){
        cout<<"  ";
    }
    if(i==0){
        cout<<i;
    }
    else{for(int j=i;j>=0;j--){
        cout<<j;
    }}
    cout<<endl;
    if(i==(n/2)-1){
        for(int j=0;j<n/2;j++){
            cout<<j;
        }
        cout<<" ";
        for(int j=n/2;j>=0;j--){
            cout<<j;
        }
    }
}
return 0; 
}