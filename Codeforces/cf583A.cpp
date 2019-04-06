// Asphalting Roads

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	int h,v;
	
	
	cin>>n;
	int arr[n*n];
	
	int j=0;
	
	for(int i=1;i<=n*n;i++){
		
		cin>>h>>v;
		
		if(h==v){
			
			arr[j]=i;
			j++;
		}
		
	}
	
  for(int i=0;i<j;i++){
	cout<<arr[i]<<" ";
	
	
 }
	
	
}
