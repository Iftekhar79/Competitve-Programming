// Checking the Calendar

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s[7]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
	string a,b;
	cin>>a>>b;
	
	
	
	for(int i=0;i<7;i++){
		
		if(s[i]==a && (s[i]==b || s[(i+2)%7]==b || s[(i+3)%7]==b)){
			cout<<"YES"<<endl;
			return 0;
			
		}
		
	}
	cout<<"NO"<<endl;
	
	
	return 0;
	
	
}
