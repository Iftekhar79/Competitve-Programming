// Buying A House

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m,k,price;
	int arr[100];

	
	cin>>n>>m>>k;
	
	
	
		int ans=100;
		
		
	for(int i=1;i<=n;i++){
		cin>>price;
		
		
		if(price<=k && price>0){
			
		int y=abs(i-m);
		
	      ans=min(ans,y);
	      
	}
}
	
	
	cout<<ans*10<<endl;
	


}
