// Bank Robbery 

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;	
	int n,num;
	vector<int> ans;
	
	cin>>a>>b>>c;
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>num;
		
		if(num>b && num<c){
			ans.push_back(num);			
		}

     }
	 
	cout<<ans.size()<<endl;
	
	
}
