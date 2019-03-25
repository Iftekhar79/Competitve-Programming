// Sasha and His Trip

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,v;
	int distance;
	int cost;

	
	cin>>n>>v;
	
	
	if(n-1<=v){
		cost=n-1;
		cout<<cost<<endl;
		
	}
	
	else{
	    cost=v;    //initially tank is full so, v*1 money costs.
	    
		for(int i=2;i<=n-v;i++){   //loop starts with 2nd kilometer,  loop end when is equa to n-v, because v is the capacity,
		                           // after reaching (n-v)-th kilometer, the rest of the path of v kilometer car can go with v liter fuel     
			                       // 1st kilometer tank if full , cost it v ,1 dollar for each liter
			                       // in every i-th to buy a liter cost i dollar.
			cost=cost+i;
			
			
		}
		
	
		cout<<cost<<endl;
		
	}
	
}
