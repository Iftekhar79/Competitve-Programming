//Numbering roads

#include<iostream>

using namespace std;

int main(){
	
	int r,n;
	int test;
	int count=1;
	
	
	
	while(cin>>r>>n){
	
	
	if(r==0 && n==0)
	break;
	
	int ans=(r-1)/n;
	
	if(ans>26)
	cout<<"Case "<<count<<": "<<"impossible"<<endl;
	
	else
	cout<<"Case "<<count<<": "<<ans<<endl;
   
 
	   count++;
   }
	
}
