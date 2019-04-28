// Night at the Museum

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	string s;
	cin>>s;
	
	
	int x=1;
	int y;
	
	
	int sum=0;
	
	for(int i=0;i<s.length();i++){
		
		y=s[i]-96;
		
		sum=sum+min(abs(x-y),26-abs(x-y));
		
		x=y;
		
		
		
	}
	
	cout<<sum<<endl;
	
	
}
