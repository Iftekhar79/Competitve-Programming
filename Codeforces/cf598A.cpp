// Tricky Sum

// -1-2+3-4.......n, any value power of 2 will be negative value



#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int test,n,sum;
	
	
	cin>>test;
	
	while(test--){
		cin>>n;
		
		sum=n*(n+1)/2;          // sum from 1 to n 
		
	
		for(int i=1;i<=n;i=i*2){     // incremented by 2 means power of 2
			
			sum=sum-2*i;      // power of 2 should be negative values, as sum is all positive values.
								// to make power of 2 values negative we have to multiply if by 2 and subtract it from sum
			
			
		}
		
		cout<<sum<<endl;
		
		
	}
	
}
