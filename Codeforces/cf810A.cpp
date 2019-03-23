//Fox and tail

#include<iostream>

using namespace std;


int main(){
	
	int a,b;
	int cnt=1;
	
	cin>>a>>b;
	
	for(int i=1;i<=a;i++){
		
		
		for(int j=1;j<=b;j++){
			
			
			if(i%2==1)
			cout<<"#";
			
			
			else if(i%2==0){
			     
			     if(( cnt%2==1 && j==b)   ||  ( cnt%2==0 && j==1 ) ){
			     	cout<<"#";
			     	
				 }
				   
			      else 
			    cout<<".";
			    
			    
			    
			    cnt++;
				 }
			   
			   
			    
			    
			    
			      
			    
			    
			}
			
			
			
		cout<<endl;
		}
		
		
		
	}
	

