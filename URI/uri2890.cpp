// Coloring Tetrahedrons

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int n;
	long double res,p;
	
	
	while(cin>>n && n){
		
		res=(11*pow(n,2)+pow(n,4))/12;
		int cnt=0;
		 p=res;
	
		while(res>0){
			
			
			res=res/10;
			cnt++;
			
		}
		if(cnt<=9){
		
		cout<<p<<endl;
	
		}
	
	else{
	

	  cout<<ans<<endl;
}
		
		
	}
	
	
	
	
}
