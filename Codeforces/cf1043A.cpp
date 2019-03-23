//Elections

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,i,j;
	int num;
	cin>>n;
	

	
	int ans=0;
	int sum=0;
	int max=0;
	
	for(i=1;i<=n;i++){
		
			cin>>num;;
			sum=sum+num;
			
		   if(num>max){
		   	max=num;
		   	
		   }
		
			
	}
	
	
	while(max*n<= 2*sum){     // awruk must get more vote than elodreip, so k*n must e greater than 2*sum
		max++;   //here max means k value;
	}
	

	cout<<max<<endl;
	
}
	

