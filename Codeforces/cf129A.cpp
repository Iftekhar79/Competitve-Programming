// Cookies
// the result must be a even value, so to make it even we will remove cookies
// if total sum is even, then removing all even valued cookies also make the sum as even 
// if total sum is odd, then only removing the odd values will make the sum even as a result
// number of cookies removed to make it even sum result will be the answer


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	int n;
	int num;
	
	
	int sum=0,even=0,odd=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>num;
		
		if(num%2==0)
		even++;
		else
		odd++;
		sum=sum+num;
		
	}
	
	if(sum%2==0){
		cout<<even<<endl;
	}
	
	else
	cout<<odd<<endl;
	
}
