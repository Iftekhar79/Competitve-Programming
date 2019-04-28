// Setu

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	int n;
	string s;
	int x;
	
	
	cin>>test;
	
	for(int i=1;i<=test;i++){
		
	
		
		cout<<"Case "<<i<<":"<<endl;
		cin>>n;
		
		int sum=0;
		for(int i=1;i<=n;i++){
			
			cin>>s;
			
			if(s=="donate"){
				cin>>x;
				sum=sum+x;
				
			}
			
			else{
				
				cout<<sum<<endl;
			}
			
		}
		
	}
	
	
}
