// Petr and Book

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	int arr[7];
	
	for(int i=0;i<7;i++){	
		
		cin>>arr[i];	
    }
	
	
	int total=n;
	
	
	while(total>0){
		
	for(int j=0;j<7;j++){
		
		total=total-arr[j];
		
		if(total<=0){
		
		cout<<j+1<<endl;
		break;
	    
			}
		
    	}
	
  }
   
   
   
}
