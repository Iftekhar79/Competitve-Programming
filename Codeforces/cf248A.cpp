// Cupboards

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	int l_open=0,l_close=0,r_open=0,r_close=0;
	
	cin>>n;
	int l,r;
	int p=n;
	
	while(n--){
		
		cin>>l>>r;
		
		
		if(l==0)
		l_close++;
		
		if(l==1)
		l_open++;
		
		if(r==0)
		r_close++;
		
		if(r==1)
		r_open++;
		
		
	}
	//cout<< l_open<<" "<<l_close<<" "<<r_open<<" "<<r_close<<endl;
	
	
	int left=min(p-(l_close),p-(l_open));
	int right=min(p-(r_close),p-(r_open));
	
	cout<<left+right<<endl;

	
	
	
	
}
