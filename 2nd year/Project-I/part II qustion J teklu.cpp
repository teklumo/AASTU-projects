#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout<<"enter n:";   // you can try with 8 
	cin>>n;
	if(n<=0){
		exit(0);
	}
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<char(j+65);
    }
    for(int k=n;k>i;k--){
      cout<<"  "; 
    }
    for(int m=i;m>=0;m--){
      cout<<char(m+65);
    }
    cout<<endl;
    if(i==n-1){

    for(int k=0;k<n;k++){
      cout<<char(k+65);
    }
    for(int k=n+1;k>=0;k--){
    	if(k==(n)){
			continue;
		}
      cout<<char(k+65);
    }
    cout<<endl;
	}
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      cout<<char(j+65);
    }
    for(int k=0;k<=i;k++){
      cout<<"  ";
    }
    for(int m=(n-1)-i;m>=0;m--){
      cout<<char(m+65);
    }
    cout<<endl;
  }
  return 0;
}