// TV volume

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int volume,t;
	int value;
	cin>>volume>>t;
			
	while(t--){
		
		cin>>value;

		 if(volume+value>100){  // volume+every positive or negative changes
			volume=100;      //if greater than 100 , it will be set to zero
		}
		
		
		else if(volume+value>0){      
		    volume=volume+value;    //volume will be incremented or decremented every time of loop occurs
		}
		
		else
		volume=0;           
}


	
	cout<<volume<<endl;
	
	
	
	
	
	
	
	
	
}
