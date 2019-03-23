#include<iostream>

using namespace std;

int main(){
	
	int n;
	int h;
	int lim;
	
	int sum=0;
	
	cin>>n;
	cin>>h;
	
	for(int i=0;i<n;i++){
		
		cin>>lim;
		
		if(lim>h){
			sum=sum+2;
			
		}
		else
		sum=sum+1;
		
	}
	
	cout<<sum;
	
	
}
