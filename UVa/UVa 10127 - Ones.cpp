#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int cnt;
	
		
	while(cin>>n){
	
		cnt=0;
		long long int sum=0;
		
		while(1){
			
			sum=(sum*10+1)%n;
			cnt++;
			
			if(sum==0)
			break;		
			
		}
		
		
		cout<<cnt<<"\n";
		
	}
	
	
	
}
