// Binary Function

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	long long int a,b;


 	cin>>a>>b;
 	long long int sum=0, cnt=0;
 	
 	for(int i=a;i<=b;i++){
 		
	 

	while(i){
		if(i%2){
			
			cnt++;
			
		}
		i=i/2;
		
	}
	sum=sum+cnt;
	
	
   }

	cout<<sum<<endl;

	
		
		

}
	

