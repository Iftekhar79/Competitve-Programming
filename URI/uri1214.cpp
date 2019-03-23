//Above average

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	int n;
	int g;
	float sum;
	int div;
	float cnt;
	cin>>test;
	
	while(test--){
		
		cin>>n;
		sum=0;
		 cnt=0;
		int arr[n];
		
		for(int i=0;i<n;i++){
			
			cin>>arr[i];
			sum+=arr[i];
			
		}
		
		sum/=n;
		
		for(int i=0;i<n;i++){
			
			if(arr[i]>sum)
			 cnt++;
		}
		
		float res=cnt/n;
		
		printf("%.3f%\n",res*100.000);
		
		
		
		
	}
	
	
}
