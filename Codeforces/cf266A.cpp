#include<iostream>

using namespace std;

int main(){
	
	string s;
	int cnt=0;
	int n;
	cin>>n;
	cin>>s;
	
	for(int i=0;i<n;i++){
		
		if(s[i]==s[i+1])
		cnt++;
	}
	
	cout<<cnt<<endl;
	
}
