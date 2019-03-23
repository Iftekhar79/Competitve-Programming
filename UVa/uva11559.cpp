//Event Planning 

#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	
	int N,B,H,W,p,a;
	int cost;
	int tot;
	

	
	while(cin>>N>>B>>H>>W){
		cost=2000000000;   //maximun cost can be beared
		
		while(H--){
			cin>>p; //money need for each friend to stay in a room
			
		
		for(int i=1;i<=W;i++){
			cin>>a;              //number of room avaiable 
			
		   tot=0;
		   
			if(a>=N){
				tot=N*p;          //total friends* each friend money need for a room is total cost
				
				if(cost>tot)
				cost=tot;                      //if total is not that much of cost,then tot will be the next cost.min is taken always
				
				
			     } 
			
			
		   }
			
	}
	  
		 if(cost<=B)                  //is cost less or equal to total budget then theyy can stay in hotel,
			cout<<cost<<endl;
			else
			cout<<"stay home"<<endl;	 //if budget is less than estimated cost then stay at home
	    
	   }
	
	
	  return 0;
	  
	}
	
	

