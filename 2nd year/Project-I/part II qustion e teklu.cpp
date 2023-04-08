#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++){
		if(i==0 || i==1){
		for(int j=0;j<9;j++){
			if(i==1 && j==8){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		for(int j=0;j<9;j++){
			cout<<"*";
		}
		cout<<endl;
		}
		else{
			for(int j=0;j<10-i;j++){
				if(j==0 && i==9){
					cout<<"\0";
				}
				else{cout<<"*";}
			}
			for(int j=0;j<i-1;j++){
				if(i!=9){
						cout<<"  ";
				}
			
			}
			for(int j=0;j<10-i;j++){
				if(j==0 && i==9){
					cout<<"\0";
					break;
				}
				else{cout<<"*";}
			}
		if(i==9){
		}
		else{	cout<<endl;}
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		for(int j=7;j>=i;j--){
			cout<<"  ";
		}
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<10;i++){
		if(i==0 || i==1){
		for(int j=0;j<9;j++){
			if(i==0 && j==8){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		for(int j=0;j<9;j++){
			cout<<"*";
		}
		cout<<endl;
		}
		}
	

    return 0;
}