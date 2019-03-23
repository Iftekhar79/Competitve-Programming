// Top N

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int arr[7]={ 1, 3, 5, 10, 25, 50 , 100 };
	
	cin>>n;
	int p;
	
		  
	for(int i=0;i<7;i++){
		
		if(n==arr[i])
			{
			 
			 cout<<"Top "<<arr[i]<<endl;
	           
	             
		}
	
	            
	
		else if(n>arr[i] && n<arr[i+1]){
			 
		
		
		cout<<"Top "<<arr[i+1]<<endl; 
		   break;
		   
		}
		
	}
		
		
		
		
		
		
	}
	
	

