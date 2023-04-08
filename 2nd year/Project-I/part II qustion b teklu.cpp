#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";  // try with 8 to get 
    cin>>n;
  for(int i=0;i<n;i++){
    if(i==0){
        for(int j=0;j<n+2;j++){
            cout<<j;
        }
        for(int j=n;j>=0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    for(int k=0;k<=i;k++){
        cout<<" ";
    }
    for(int j=0;j<=n-i;j++){
        cout<<j;
    }
    for(int j=(n-1)-i;j>=0;j--){
        cout<<j;
    }
    cout<<endl;
  }
  for(int i=0;i<(n+1);i++){
    for(int j=n-i;j>=0;j--){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<j;
    }
    for(int j=i-1;j>=0;j--){
        cout<<j;
    }
    cout<<endl;

    if(i==n){
         for(int j=0;j<(n+2);j++){
            cout<<j;
        }
        for(int j=n;j>=0;j--){
            cout<<j;
        }
        cout<<endl;
    }
  }
  return 0;

}