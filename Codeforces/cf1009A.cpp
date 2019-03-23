// Game Shopping

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int c[1001],a[1001];
	int n,m;
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	
	
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	
	int f=0;
	int cnt=0;

	for(int i=0;i<n;i++){
		if(a[f]>=c[i]){
		
			f++;
			cnt++;    //f increase only when array a is able to buy a game from array c.
		}	               //  all the games should check by array a , for buying issue
			               // it's not necessary that all array a values should used, serally they should use untill the array c finished.
			               
	}
	
	cout<<cnt<<endl;
	
	
}
