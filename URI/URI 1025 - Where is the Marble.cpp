// Where is the Marble?
//URI - 1025

#include<iostream>
#include<bits/stdc++.h>

using namespace std;



	int compare(int fn[],int y,int r){
		
		for(int i=0;i<y;i++){
			
			if(fn[i]==r) {
			
			return i+1;
		   }
			
		}
		return 0;
}

int main(){
	int n,q,i, k=1, search,loc;
	
	while(cin>>n>>q){
		
		if(n==0 && q==0)
		break;	
		
	
	    int arr[n];
		
		for( i=0;i<n;i++){
			
			cin>>arr[i];
			
		   }



       //sorting array
       
		sort(arr,arr+n);
       
     
	
		cout<<"CASE# "<<k<<":"<<endl;
		
		
	   

	   	
		
	   //taking inputs for searching
	   while(q--) {
		
		cin>>search;
		
	   
		int res=compare(arr,n,search);
		  
	    if(res!= 0)
		
		 printf("%d found at %d\n",search,res);
		 
		 
           else printf("%d not found\n",search);
         
	    	}    
       
	      k++;
    
        }
     

    
    

     }
    
   
     
  

