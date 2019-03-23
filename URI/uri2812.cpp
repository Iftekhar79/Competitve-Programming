//Laércio
//uri problem 

#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	int newarr[n];
	
		
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]%2==1){
			newarr[i]=arr[i];
		
			
		}
		
		
		for(int j=0,k=n-1;;j++,k--){
			
			cout<<newarr[j]<<" "<<newarr[k]<<" ";
		}
		
	}
	
}
