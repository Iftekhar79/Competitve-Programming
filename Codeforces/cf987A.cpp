// Infinity Gauntlet

#include<bits/stdc++.h>
#include<map>

using namespace std;


	map<string,string> mymap={{"purple","Power"},{"green","Time"},{"blue","Space"},{"orange","Soul"},{"red","Reality"},{"yellow","Mind"}};
	
	int main(){

	
	
	
	string s;
	int n;
	
	cin>>n;
	
	while(n--){
		cin>>s;
		
		mymap.erase(s);
		
		
		
		
	}
	
	cout<<mymap.size()<<endl;
	
	for(auto i:mymap)
	cout<<i.second<<endl;
	
}
