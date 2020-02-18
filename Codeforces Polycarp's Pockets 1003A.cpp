//Polycarp's Pockets

#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	
	
	#ifdef SAVES_TIME
	freopen("a.txt", "r", stdin);
	freopen("a.txt", "w", stdout);	
	#endif
	
	vector<int> myvector(101);
	int n;
	int a;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		myvector[a]++;
		
	}
	
	int res= *max_element(myvector.begin(),myvector.end());
	
	cout<<res<<endl;
	
	
	
	
}
