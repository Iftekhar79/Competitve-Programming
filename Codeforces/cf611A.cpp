// New Year and Days

//this problem is about year 2016

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x;
	char s1[10];
	
	cin>>x;
	
	
	scanf("%s",&s1);
	scanf("%s",&s1);
	
	if(s1[0]=='w'){
		
		if(x==5 || x==6){
			
			cout<<53<<endl;
			
		}
		else
		cout<<52<<endl;
		
		
	}
	
	else{
		
		if(x<=29){
			cout<<12<<endl;
			
		}
		
		else if(x==30){
			
			cout<<11<<endl;
		}
		
		else cout<<7<<endl;
		
	}
	
	
	
}
