#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
	int tot,q,i, k=1, search,loc;
	int ok=0;
	
	while(cin>>tot>>q){
		
		if(tot==0 && q==0)
		break;	
		
	
	    int arr[tot];
		
		for( i=1;i<=tot;i++){
			cin>>arr[i];
		   }

		sort(arr,arr+tot);
		
		cout<<"CASE# "<<k<<":"<<endl;	
	   
	   while(q--) {
		
		cin>>search;
		
	   for( int i=1;i<=tot;i++){
		
		   if(search==arr[i]){
		   
	 	   loc=i;
	cout<<search<<" found at "<<loc+1<<endl; 
	   
	  // ok=1;
	break;
      }
   
	    	
     }
     if(ok==0)
    cout<<search<<" not found "<<endl;
 
   
     }
   k++;
   
  }
}

