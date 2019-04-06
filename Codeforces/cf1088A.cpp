// Ehab and another construction problem

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x;
	
	cin>>x;
	
	if(x==1)
	cout<<-1<<endl;
	
	else 
	cout<<x-x%2<<" "<<2<<endl;   // any even value of x is as a, if odd , then 1 will be distracted. the value 2 for b is always satisfactory
	
	
	
}
