// Start Grid

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	int arr1[24];
	int arr2[24];
	int p,q;
	
	
	while(scanf("%d", &n) != EOF ){
	
	for(int i=0;i<n;i++){
		cin>>arr1[i];
		
	    p=arr1[n-1];
	    
	}
	
	for(int j=0;j<n;j++){
		cin>>arr2[j];
		
		if(arr2[j]==p){
			q=j;
			
		}
	}
	cout<<q<<endl;
	
	
}
	
	
}
