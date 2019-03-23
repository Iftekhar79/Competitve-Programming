// Margarite and the best present
//Math related problem 


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	long long int a,b;
	long long int ans,sum;
	
	cin>>test;
	
	while(test--){
		
		cin>>a>>b;
		sum=0;
		
		for(int i=a;i<=b;i++){
		     ans=i*pow(-1,i);
		     
		     sum=sum+ans;
		     
			 	
		}
		cout<<sum<<endl;
		
		
	}
	
	
	
	
}
