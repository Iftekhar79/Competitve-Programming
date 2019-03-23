// Ambiguous Permutations
//Logic: for a given array if the array values makes as the reverse array positions, the reverse array value will be start from 1 to n
//such as given array is 2,3,4,5,1 for n=5, the reverse array will be arr[2]=1,arr[3]=2,arr[4]=3,arr[5]=4,arr[1]=5,so the reverse array values are the i-th positions. 
//so reverse array looks like 5,1,2,3,4. 
// if given and reverse arrays all positions pair from 1 to n ,matches then this is ambiguous,otherwise not ambiguous.


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[100000];
	int rev[100000];
	
   int n;
   
   
   while(cin>>n){
   	   
   	   if(n==0)
   	   break;
   	   
   	   for(int i=1;i<=n;i++){
   	   	
   	   	    cin>>arr[i];
   	   	    rev[arr[i]]=i;
   	   	    
		  }
		  
		  int cnt=0;
		  
		  for(int i=1;i<=n;i++){
		  	
		  	   if(arr[i]==rev[i])
		  	    cnt++;
		  	    
		  	   
		  }
   	    
   	    
   	    
   	    if(cnt==n){
   	    	
   	    	cout<<"ambiguous"<<endl;
   	    	
		   }
		   
		   else
		    cout<<"not ambiguous"<<endl;
		    
		    
		    
   }
	
	
	
}
