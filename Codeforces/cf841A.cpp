// Generous Kefa

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char s[100];
	int arr[10000];
	
	int n,k;
	
	cin>>n>>k;
	cin>>s;
	
	int cnt=0;
	int x;
	
	for(int i=0;i<n;i++){
		x=s[i];
		
		arr[x]++;
	
	if(arr[x]>k){
		cout<<"NO"<<endl;
		return 0;
		
     	}
		
	}
	
	cout<<"YES"<<endl;
	
	
}
