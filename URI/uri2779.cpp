// Album of the Cup
// set only takes the unique values


#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
	
	set<int> myset;
	
	int n,m,value;
	
	cin>>n>>m;
	
   while(m--){
	
	cin>>value;
	
	myset.insert(value);
	
    }
  
  cout<<n-myset.size()<<endl;
  
	
	
}
