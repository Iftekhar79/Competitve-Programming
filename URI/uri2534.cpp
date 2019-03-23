// General Exam

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,q;
	
	int arr[100];
	
	
	cin>>n>>q;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
	}

   
   sort(arr,arr+n,greater<int>());
   
    int num;
  
   for(int i=0;i<q;i++){
     
      	cin>>num;
      	
      	for(int j=0;j<n;j++){
		  
      	
      
      	
      	cout<<arr[num-1]<<endl;
      	break;
      
      	
	  }
   }
   
   	
	
	
}
