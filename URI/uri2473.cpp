// Lottery

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int arr1[6];
	int arr2[6];
	
	
	
	for(int i=0;i<6;i++){
		cin>>arr1[i];
		
	}
	
	
	for(int j=0;j<6;j++){
		
		cin>>arr2[j];
		
	}
	
	bool t=true;
	
	int cnt=0;
	
	for(int i=0;i<6;i++){
		
		for(int j=0;j<6;j++){
			
			if(arr1[i]==arr2[j] && i==j) {
			   	
			   	
				  if(i+1==3){
			   cout<<"terno"<<endl;
			   
			      break;
			   
		            	}
	
			else if(i+1==4){
				cout<<"quadra"<<endl;
					 break;
			   
		    	}
		    	
			else if(i+1==5){
				cout<<"quina"<<endl;
					 break;
			   
		 		}
		 		
		 		
			 else if(i+1==6){
				cout<<"sena"<<endl;
						 break;
			   
					}
					
			 else if(i+1==1 || i+1==2 ){
				cout<<"azar"<<endl;
		               break;
			   
				}
	 
	     	
          }
    
		
		
       }
			
	}
	
	   	cout<<"azar"<<endl;     
			
				
			   
		
   
}
		

