// Detective Book

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[10000];
	
	int m=0,cnt=0;
	
	
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		
		cin>>arr[i];
		
		
		m=max(m,arr[i]);
		
		if(m==i){
			cnt++;
			
		}
		
	}
	
	
	cout<<cnt<<endl;
	
	
}
