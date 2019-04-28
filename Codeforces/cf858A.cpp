// k-rounding

#include<bits/stdc++.h>
#include <algorithm>  

typedef long long ll;

using namespace std;

int main(){
	
	
	int n,k;
	cin>>n>>k;
	
	int round=1;
	
	for(int i=0;i<k;i++)
	
		round=round*10;
		
	
	
	cout<< (n*1ll*round )/ __gcd(n,round) <<endl;
	
	
	
}
