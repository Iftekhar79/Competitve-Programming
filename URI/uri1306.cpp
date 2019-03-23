// Numbering Roads

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int r,n,i;
	int cnt=1;
	int flag;
	
	while(cin>>r>>n){
		
		if(r==0 && n==0)
		  break;
		  
		flag=0;
		  
		 if(n >= r){
            cout<<"Case "<<cnt<<": 0"<<endl;
            
        }
        
        
		 else {
		 	
		 	
		  for( i=1;i<27;i++){     // from A,B,C...........Z , 1 to 26,
		  	
		  	   if(n*(i+1)>=r){     // if r=8 and n=5 then possible roand num. are 1,2,3,4,5,1A,2A,3A,4A,5A.......  
				                  //n itselt is an n number of combinations ,so always there will be n+(i+1).
				 
		  	   cout<<"Case "<<cnt<<": "<<i<<endl;
		  	   flag=1;
		  	   break;
		  }
		  
     }
		  if(flag==0) 
		  cout<<"Case "<<cnt<<": impossible"<<endl;
    }
		 
		 
		  cnt++;
		  
		  
	}
	
	
}
