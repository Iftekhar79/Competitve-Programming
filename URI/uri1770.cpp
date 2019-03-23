// Shuffle

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[101];
	int arr2[1000];
	
	int m,k;
	int i,j;
	int num,sum,size;
	
	while(cin>>m>>k){
	
	     set<int> myset;
	     
		for(i=0;i<m;i++){
			
			cin>>arr[i];
			
		}
		
		 sum=0;
		
		for(int j=0;j<k;j++){
			
			cin>>arr2[j];
			
			myset.insert(arr2[j]);
			
			 size=myset.size();
			
		
			   	
			
		}
		
		if(size<m){
			cout<<"-1"<<endl;
			
		}
		
		else{
			
			
			for(int j=0,q=0;j<k;j++,q++){
				
			
			   myset.insert(arr2[q]);
			
			   while(myset.size()!=m){
			   	sum=sum+arr[arr2[q]-1];
			   	
			   }
			
		}
		
		
		cout<<sum<<endl;
		
	}
	
	
 }


}
