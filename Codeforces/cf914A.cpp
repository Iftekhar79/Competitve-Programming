//  Perfect Squares

#include<bits/stdc++.h>

using namespace std;





int main(){
	
	int n;
	int number;
	int sq;
	int ans=-(1e7);

	cin>>n;
	
	while(n--){
		
		cin>>number;
		
	   if(sqrt(number) != (int) sqrt(number)){    //space between int and sqrt doesn't matter 
	   	
	   	  ans=max(ans,number);
	   	  
	   }
		
	}
	
	cout<<ans<<endl;
	
	
	
	
}
