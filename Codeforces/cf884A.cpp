//  Book Reading

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,t,p,sec,q;
	int cnt=0,sum=0;
	cin>>n>>t;
	
	while(n--){
		
		while(sum<t){
		
		cin>>sec;
		p= 86400-sec;
		sum=sum+p;
		cnt++;
    
	   }
		
	}
	
	cout<<cnt<<endl;
	
	
}
