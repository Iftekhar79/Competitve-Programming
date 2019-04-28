// Jzzhu and Children

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	float m;

	int res,ans;
	int num;
	cin>>n>>m;
	
	int max=-1;
	//int arr[100];
	
	
	for(int i=0;i<n;i++){
		
		cin>>num;

		
		if(ceil(num/m)>=max){
			
			max=ceil(num/m);
					
			ans=i+1;
			
			
		}
		
	}
	
	
	cout<<ans<<endl;
	
	
	
	
}
