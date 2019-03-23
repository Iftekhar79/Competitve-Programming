// Vitaly and Night

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	int p,q;
	cin>>n>>m;
	int cnt=0;
	
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			cin>>p>>q;
			
			if(p+q>0)
			cnt++;
			
		}
	}
	
	
	

	
	cout<<cnt<<endl;
	
	
	
}
