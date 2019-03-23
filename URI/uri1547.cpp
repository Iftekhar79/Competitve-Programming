//Guess what

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){	
	int test;
	int n,val;
		
	int arr[10];
	int i,j,p,k,ans;
    int dif[10];
    
	cin>>test;
	
	while(test--){
	
		cin>>n>>val;
	
		for(i=0,k=0;i<n,k<n;i++,k++){
			cin>>arr[i];
			
			if(arr[i]>=val){          //find the difference between given value and inputted value
				dif[k]=arr[i]-val;     //if input is bigger than given value
		 	}
		 	
				else
				dif[k]=val-arr[i];     // //if input is less than given value
				 
		
			  	
		}	
	
		
		int min=dif[0];             //fix that difference array first index value is minimum difference
		
		for(j=1;j<n;j++){                 //this loop finds minimum value to find that which inputted index value is closer to the given value 
			
			if(dif[j]<min){              //if less than minimum is found then that will be changed minimum value 
				min=dif[j];
			}
			
		}
		
		
		for(p=0;p<n;p++){                 //this loop finds the postion from dif array where difference between given and iput value is stored 
			
			if(dif[p]==min){
				ans=p;             //if minimum difference is found at p, then it will the desired index value where the closer or equal to the given value can be found 
				break;
				
			}
			
		}
		
		
		
		cout<<ans+1<<endl;
		
		
		
		
	}
	
	
}
