// Johny Likes Numbers

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n,k;
	
	cin>>n>>k;
	
    int rem=n%k;
    
    int ans=n+k-rem;
    
    cout<<ans<<endl;
    
	
}
