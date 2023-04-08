#include <iostream>
#include<cmath>
using namespace std;

int main() {
  cout<<"side1"<<'\t'<<"side2"<<'\t'<<"hypotnenuse"<<endl;
      for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
          for(int k=1;k<=100;k++){
            if(pow(i,2)+pow(j,2)==pow(k,2)){
              cout<<" "<<i<<'\t'<<" "<<j<<'\t'<<" "<<k<<endl;
            }
          }
        }
      }
  return 0;
}