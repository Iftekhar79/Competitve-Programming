// Even substring 

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char s[65001];
	int temp;
    int n;
	cin>>n;	
	cin>>s;

	
	int cnt=0;
	
	for(int i=0;i<n;i++){
		
		temp=s[i]-'0';
		
		if(temp%2==0){
			cnt=cnt+(i+1);
			
		}
		
	}
	
	cout<<cnt<<endl;
	
}
