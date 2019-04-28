// Adjacent Replacements

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int x;
	
	for(int i=1;i<=n;i++){
		cin>>x;
		
		if(x%2==0){
			cout<<x-1<<" ";
		}
		
		else
		cout<<x<<" ";
		
	}
	
	cout<<endl;
	
	
}
