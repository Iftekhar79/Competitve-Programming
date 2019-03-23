// Buy a Shovel

// we have to find k*x mod 10 = 0  or  k*x mod 10 = r
// loop will be 1 to 10


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int k,r;
	
	cin>>k>>r;
	
	for(int i=1;i<=10;i++){
		
		if(k*i%10==0 || k*i%10==r){
			cout<<i<<endl;
			break;
			
		}
		
	}
	
	
	
	
}
