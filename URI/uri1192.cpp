//  Paula's Mathematic Game

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int test;
 	int a,c;
	char b;
	
	cin>>test;
	
	while(test--){
		
		scanf("%d%c%d",&a,&b,&c);
		
	  if(a==c){
		
			cout<<a*c<<endl;
		}
		
	 else if(b>=65 && b<=90 ){
			
			cout<<c-a<<endl;
		}
		
		else 	
			cout<<a+c<<endl;
	
		
	}
	
	
	
	
	
}
