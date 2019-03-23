// Tom Riddle's Diary

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,i,j;
	string s[101];
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>s[i];
		
	}
	
	
	for( i=0;i<n;i++){
		cout<<"so"<<j<<endl;
		for( j=0;j<i;j++){
			
			if(s[i]==s[j])
			break;
			
			cout<<j<<endl;
			
			
		}
		
		if(i!=j)
		   cout<<"YES"<<endl;
		   
		   else
		   cout<<"NO"<<endl;
		   
		
	}
	
	
}
