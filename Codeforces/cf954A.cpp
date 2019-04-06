// Diagonal Walking

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char s[100];

	
	
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>s[i];
		
		
	}
	
	int cnt=0;
	
	for(int i=0;i<n-1;i++){
		
		if(s[i]!=s[i+1]){
			cnt++;
		    i++;   // alrealy i++,so after true this condition i will 1 incremented as s[i+1] is taken to the condition
		    
		}
	
	}

    
	cout<<n-cnt<<endl;
	
}
