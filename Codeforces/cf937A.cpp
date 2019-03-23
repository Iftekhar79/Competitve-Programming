// Olympiad

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int num;

	set<int> myset;
	int n;
	cin>>n;
	
	int j=0;
	
	for(int i=0;i<n;i++){
		
		cin>>num;
		if(num>0){
		
		 myset.insert(num);
		 
	   }
	}
	
	cout<<myset.size()<<endl;
	

}
