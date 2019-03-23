// Bulbs 

#include<bits/stdc++.h>
#include<set>


using namespace std;

int main(){
	
	int n,m,i,j;
	int p;
	int num;
	
	set<int> myset;
	
	cin>>n>>m;
	
	while(n--){
		cin>>p;
		
		for(i=0;i<p;i++){
			cin>>num;
			myset.insert(num);
			
		}
		
	}
	
	if(myset.size()==m){
		cout<<"YES"<<endl;
	}
	
	else
		cout<<"NO"<<endl;
	
}
