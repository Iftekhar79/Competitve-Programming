// Nastya Is Reading a Book

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int a[100],b[100];
	int n,k;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		
	}
	
	cin>>k;
	
	
	for(int i=0;i<n;i++){
			
			if(b[i]>=k){
				cout<<n-i<<endl;
				break;
				
			}	
	}
	
	
	
}
