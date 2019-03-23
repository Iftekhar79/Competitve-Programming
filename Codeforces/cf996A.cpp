//Hit the Lottery

#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main(){
	
	int arr[]={1,5,10,20,100};
	int money;
	
	
	cin>>money;
	
	int ans=0;
	
	
	for(int i=4;i>=0;--i){
		
		if(money>=arr[i])
			ans=ans+(money/arr[i]);
			
		
	
		if(money%arr[i]==0)
		break;
		
		else
		money=money-((money/arr[i])*arr[i]);
		
		
	}
	
	cout<<ans<<endl;
	
	
}
