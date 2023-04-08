#include <iostream>
using namespace std;
int main(){	
	double estimated_cost,cost_item,number_year,inflention_rate,year,cost_difference,n;
	cout<<"enter cost of item:";
	cin>>cost_item;
	cout<<"enter rate of inflention:";
	cin>>inflention_rate;
	cout<<"enter year:";
	cin>>year;
	cout<<"enter number of years from now:";
	cin>>number_year;
	cout<<" Menu \n1,cost of specific year from now\n2,cost for each years till specific year\nwhat do you went?";
	cin>>n;
	for(int i=year+1;i<=(year+number_year);i++){
		double original=cost_item;
		estimated_cost=cost_item+(cost_item*inflention_rate*0.01);
		cost_item=estimated_cost;
		cost_difference=estimated_cost-original;
		if(n==2){
			if(i==year+1){
				cout<<"year"<<'\t'<<"estimated_cost"<<'\t'<<"cost_difference"<<endl;
			}
		     cout<<i<<'\t'<<estimated_cost<<'\t'<<'\t'<<cost_difference<<endl;
		}
		else if(n==1){
			if(i==(year+number_year)){
				cout<<estimated_cost;
			}
		}
	}
		
	
    return 0;
}