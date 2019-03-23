//  Points in Segments

#include<bits/stdc++.h>
#include<set>
using namespace std;
int arr[200];
int main(){
	
	
	int p,q;
	int n,m;
	

	
	cin>>n>>m;
	
	
	int cnt=0;
	
	while(n--){
		
		cin>>p>>q;
		
		for(int i=p;i<=q;i++){
			
		arr[i]=1;
		
		}
		
	
		
	}
	
		for(int i=1;i<=m;i++){
		
		if(arr[i]==1)
		cnt++;
	}
	cout<<m-cnt<<endl;
	
	for(int i=1;i<=m;i++){
		
		if(arr[i]==0){
			cout<<i<<" ";
		}
	}
	

	
	
	
}
