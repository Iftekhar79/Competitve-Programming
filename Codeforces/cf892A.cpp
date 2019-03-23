// Greed

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int sum=0,n,a,arrb[100005];
	cin>>n;

	
	for(int i=0;i<n;i++){
		cin>>a;
		
		sum=sum+a;
		
	}
	

	
	for(int i=0;i<n;i++){
		cin>>arrb[i];
		
	}
	
	sort(arrb,arrb+n);

	
	

	
	if(sum>arrb[n-1]+arrb[n-2]){
		cout<<"NO"<<endl;
	}
	
	else
	cout<<"YES"<<endl;
	
	
}
