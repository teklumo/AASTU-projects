#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"enter n:"; 
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            cout<<j;
        }
        for(int j=(n-1)-i;j>=0;j--){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
        if(i==(n-1)){
            for(int j=n;j>0;j--){
                cout<<j;
            }
            cout<<" ";
            for(int j=0;j<=n;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=(n-1)-i;j>=0;j--){
            cout<<j;
        }
        for(int j=0;j<=i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=(n-1)-i;j++){
            cout<<j;
        }
        cout<<endl;
        
    }
  return 0;

}