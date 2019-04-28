// Magic Number 

#include <iostream> 
using namespace std; 
  

 string magic_number(int n){
	
	
	int num=n;
	
	while(num>0){
		
		if(num%1000==144){
			
			num=num/1000;
			
		}
		else if(num%100==14){
			
			num=num/100;
			
		}
		else if(num%10==1){
			
			num=num/10;
			
		}
		else {
			
			return "NO";
			
			
		}
		
		
	}
	
	return "YES";
	
	
}


int main(){
	
	
	int n;
	cin>>n;
	
	cout<<magic_number(n)<<endl;
	
}
