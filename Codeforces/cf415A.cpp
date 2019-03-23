// Mashmokh and Lights
// we have to find which ligth being offed by which switch 
// switch number is inputted values
 

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	int num;
	int i,j;
	
	
	cin>>n>>m;
	
	int arr[101]={0};
	
	
	for(i=0;i<m;i++){
		
		cin>>num;
		
		for(j=num;j<=n;j++){
			
			if(arr[j]==0)
				arr[j]=num;
				
			
			
		}
	
	}
	
	
	
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
	
	
//	cout<<endl;
	
	
	
}
