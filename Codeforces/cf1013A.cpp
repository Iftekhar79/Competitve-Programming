//Piles With Stones

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	
	
	int a[n];
	int b[n];
	int sum1=0,sum2=0;
	
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		
		sum1=sum1+a[i];
		
	}
	
	
		for(int i=0;i<n;i++){
		cin>>b[i];
		
		sum2=sum2+b[i];
		
	}
	
	
	if(sum1>=sum2){
		cout<<"Yes"<<endl;
		
	}
	
	else 
	cout<<"No"<<endl;
	
	
	
}
