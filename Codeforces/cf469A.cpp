//I Wanna Be the Guy

//The probelm is about to find that. there is given n, n is from 1 to n
//for two test cases p and q, there are p values and q values, if all from 1 to n each value can find from the p and q values
//then i am the guy otherwise not



#include<iostream>

using namespace std;

int main(){
	
	int n;
    int p,q;
    int temp;
    
  
    
    int flag=0;
	
	
	cin>>n;
	
    int check[n];
	
	cin>>p;
	
	int arr[p];
	
	for(int i=0;i<p;i++){
		cin>>arr[i];
		
		temp=arr[i];
		
		check[temp]=1;
		
	}  
    
    
    	cin>>q;
	int arr1[q];
	
	for(int i=0;i<q;i++){
		cin>>arr1[i];
		
		temp=arr1[i];
		
		check[temp]=1;
		
	}
	
	
	for(int i=1;i<=n;i++){
		
		if(check[i]==1){
		
		   flag=1;
	  }
	  
		   else {
		   
		   flag=0;
		   break;
     	}
		
	}
	
	if(flag==1)
	cout<<"I become the guy."<<endl;
	else
	cout<<"Oh, my keyboard!"<<endl;
	
}
