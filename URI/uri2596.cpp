// Xenlonguinho

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	int n;
	cin>>test;
	
	
	while(test--){
     
	 	cin>>n;
	 	
	int cnt;
	int ans=0;
	
	for(int i=1;i<=n;i++){
		  cnt=0;
		  
		  for(int j=1;j<=i;j++){
		  	
		  	if(i%j==0)
		  	cnt++;
		  	
		  }
		if(cnt%2==0)
		 ans++;
		
	 }
	
	cout<<ans<<endl;
   }
   
   
   return 0;
   
}
