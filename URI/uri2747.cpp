//Output one

#include<iostream>

using namespace std;

int main(){
	
	

  for(int i=1;i<=7;i++){
  	
  	if(i==1 || i==7){
  		
  		for(int k=1;k<=39;k++){
  			cout<<"-";
		  }
		  
		  cout<<endl;
		  
	  }
	  
	  
	  
	  else {
	  	
	  	for(int k=1;k<=39;k++){
	  		
	  		if(k==1 || k==39)
	  		cout<<"|";
	  		
	  		
	  		else 
	  		cout<<" ";
		  }
	  	
	  	cout<<endl;
	  }
	  
  	
  }
	
	
	
}
