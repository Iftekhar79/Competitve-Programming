// Combination Lock

#include<bits/stdc++.h>

using namespace std;

int main(){
	int dis;	
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	
	int sum=0;


	for(int i=0;i<n;i++){
		
		dis=abs(a[i]-b[i]);
		
		sum=sum+min(dis,10-dis);  // if the distance is more than 5 then it wil calculate 10-x, other wise abs value is the difference
	}
	
	
	
	cout<<sum<<endl;
	
	
}
