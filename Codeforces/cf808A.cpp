// Lucky Year

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	long long int num,n,k;
	long long int rem,t=1;
	
	cin>>num;
	
	
	
	n=num;    //inputted value num have to use later,so we will work with n now.
	while(n){    //means n>0
		
		rem=n%10;
		n=n/10;
		t=t*10;
	
	}
	//here t will be extra 10 times when loop ends ,so we have to reduce it by dividing 10
	
	t=t/10;
	
	int ans=((rem+1)*t)-num;
	
	
	cout<<ans<<endl;
	
	
}
