// Butterflies

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[200][200];
	int n;
	int a,b;
	
	
	int p,q;
	
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
			cin>>arr[i][j];
			
		}
		
	}
	
	
	int m=2*n;
	
	int arr2[m];
	
	 int k=0;
	while(m--){
	
	    cin>>a>>b;
		   	
		arr2[k]=arr[a][b];
			
			k++;
			
		}
		
	

	
	int cnt=0;
	
	
	  for (int i=0; i<m; i++) 
    { 
        
 
        for (int j=0; j<i; j++) {
		
        
           if (arr[i] == arr[j]) 
              
                 break;
		
		  
		  if(i==j)
		    cnt++;
		    
		   
        }
        
    
    } 
    
    cout<<cnt<<endl;
    
	
	
}
