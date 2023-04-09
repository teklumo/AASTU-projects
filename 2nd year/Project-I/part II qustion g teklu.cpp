#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<(n/2);i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=(n/2)-i;j>=0;j--){
            cout<<j;
        }
        for(int j=1;j<=(n/2)-i;j++){
            cout<<j;
        }cout<<endl;
    }
    for(int i=0;i<(n/2)+1;i++){
        for(int j=(n/2)-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=i;j>=0;j--){
            cout<<j;
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}