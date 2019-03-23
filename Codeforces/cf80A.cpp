// Panoramix's Prediction

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	cin>>a>>b;
	int cnt=0;
	bool flag=0;
	
	
	for(int i=a;i<=b;i++){
		
		for(int j=2;j<=a;j++){
			
		 if(i % j == 0)  
      {  
        break;  
      } 
	   
  }  
  

     cnt++;
    
		
	}
	
	if(cnt==2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	
}
