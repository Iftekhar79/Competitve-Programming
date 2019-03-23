//  Counting Sheep

#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
	
	int t,n,value,ans;
	
	int p;
	
 
	
	cin>>t;
	
	while(t--){
	    
		cin>>n;
		
	 set<int> myset;
		 
		
		while(n--){
			
			cin>>value;
			
			myset.insert(value);
			
			
		}
		p=myset.size();
		cout<<p<<endl;

		
	}
	
	
	return 0;
	
}
