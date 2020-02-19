// T-primes

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	long long n;
	
	cin>>test;
	
	while(test--){
		
		cin>>n;
		int cnt=0;
		
		for(int i=1;i<=sqrt(n);i++){
			
			if(n%i==0){
				
				if(n/i==i){
					cnt++;
					
				}
				
				else
				cnt=cnt+2;
				
				
			}
			
		}
		
		
		if(cnt==3)
		   cout<<"YES"<<endl;
		   
		else 
		cout<<"NO"<<endl;
		
	}
	
	
}
