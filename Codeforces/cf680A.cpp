// Bear and Five Cards

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[5];

	int sum=0;
	
	for(int i=0;i<5;++i){
		
		cin>>arr[i];
		
		
		sum=sum+arr[i];
		
	}
	
	
	int result=sum;
	
	//for discarding 2 cards
	
	for(int i=0;i<5;++i){
		
		for(int j=i+1;j<5;++j){
			
				if(arr[i]==arr[j]){
				
				result=min(result,sum-2*arr[i]);
				
				
					}
			
		}
	}
	
	
	//for discarding 3 cards
	
		for(int i=0;i<5;++i){
		
				for(int j=i+1;j<5;++j){
			
						for(int k=j+1;k<5;++k){
				
			
			if(arr[i]==arr[j] && arr[i]==arr[k]){
				
				result=min(result,sum-3*arr[i]);
				
				
					}
			
		}
	}
}
	
	cout<<result<<endl;
	
	
	
}
