// Valera and Plates

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m,k;
	cin>>n>>m>>k;
	
	int num;
	
	
	int cnt =0;
	
	for(int i=0;i<n;i++){
		
		cin>>num;
		
		if(num==1){
			m--;
			if(m<0)
			cnt++;
			
		}
		
		else if(num==2){
			
				k--;
		
		if(k<0){
			
			if(m>0){
				m--;
			}
			
			else{
				cnt++;
			}
				
			
		}
			
			
			
				
			
		}
		
		
	}
	
	cout<<cnt<<endl;
	
	
	
	
}
