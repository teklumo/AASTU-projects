#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	if(n<=0){
		exit(0);
	}
  for(int i=0;i<n;i++){
    for(int k=0;k<i;k++){
      cout<<"  ";
    }
    for(int j=(n-1)-i;j>=0;j--){
      cout<<char(j+65)<<" ";
    }
    for(int m=1;m<n-i;m++){
      cout<<char(m+65)<<" ";
    }
    cout<<endl;
  }
  for(int i=0;i<(n-1);i++){
    for(int k=(n-2)-i;k>0;k--){
      cout<<"  ";
    }
    for(int j=i+1;j>=0;j--){
      cout<<char(j+65)<<" ";
    }
    for(int m=1;m<=i+1;m++){
      cout<<char(m+65)<<" ";
    }
    cout<<endl;
  }
  return 0;
}