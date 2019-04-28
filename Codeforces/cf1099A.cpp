// Snowball

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int w,h,u1,h1,u2,h2;
	cin>>w>>h>>u1>>h1>>u2>>h2;
	
	
	
		
	for(int i=h;i>0;i--){
		
		w=w+i;
		
		// first time for i=h, loop will just sum initial w and h
		
		if(i==h1){
			
			w=w-u1;
			
			if(w<0)
			  w=0;
			  	
		}
		
		
		if(i==h2){
			
			w=w-u2;
			
			if(w<0)
			 w=0;
		  }
		
		
	}
	
	cout<<w<<endl;
	
	
	
}
