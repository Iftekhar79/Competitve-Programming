//Good Matrix Elements 01

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	int arr[n][n];
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			cin>>arr[i][j];
			
		}
		
	}
	
	
	
	
    int sum=0;
    

	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			
			if(i==(n/2)){
			
			sum=sum+ arr[n/2][j];
			}
			
			else if(j==(n/2)){
			
			sum=sum+ arr[i][n/2];
			
			}
			
			
			else if(i==j){
				sum=sum+arr[i][j];
			}
			
			
				else if(i==(n-j-1)){
				
				sum=sum+arr[i][j];
			}
			
			
			
		}
		
	}
	
	
	

	
	cout<<sum<<endl;
	
	
	
}
