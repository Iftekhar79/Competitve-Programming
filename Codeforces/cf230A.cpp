// Dragons

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	int n,s;
	
	cin>>s>>n;
	
	pair<int,int> a[n];
	
	
	for(int i=0;i<n;i++){
		
		cin>>a[i].first>>a[i].second;
		
		
	}
	
	
	sort(a,a+n);
	
	
	int i=0;
	
	
	while(s>a[i].first && i<n){
		s = s + a[i].second;
		i++;
		
	}
	
	if(i==n)
		cout<<"YES"<<endl;
	
	else 
	cout<<"NO"<<endl;
	
	
}
