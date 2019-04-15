// Indian Summer

#include<bits/stdc++.h>
#include<set>
#include<utility>

using namespace std;



int main(){
	
	int n;
	
	string a,b;
	
	set<pair<string,string>> m;

	
	cin>>n;
	while(n--){
		
		cin>>a>>b;
		
		m.insert({a,b});
		
		
	}
	
	cout<<m.size()<<endl;
	
	
	
}
