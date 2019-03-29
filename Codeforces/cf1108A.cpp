// Two distinct points

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c,d;
	
	int n;
	
	cin>>n;
	
	while(n--){
		
		cin>>a>>b>>c>>d;
		
		
		for(int i=a,j=d;i<=b,j>=c;i++,j--){
			if(i!=j){
				cout<<i<<" "<<j<<endl;
				break;
				
			}
			
		}
		
	}
	
}
