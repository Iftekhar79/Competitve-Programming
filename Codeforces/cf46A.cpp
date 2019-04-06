// Ball Game

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int rem;
	
	cin>>n;
	
	cout<<2<<" ";
	int sum=2;
	
	
	for(int j=2,k=1;k<n-1;k++,j++){
		sum=sum+j;
		
		if(sum>n){
		
		rem=sum%n;
		if(rem==0){
		
		cout<<n<<" ";
		  }
		  else
		  cout<<rem<<" ";
		  
		  
		  
		
		}
		else
		cout<<sum<<" ";
		
		
		
		
	}
	
	
}

