// Links and Pearls

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	
	cin>>s;
	
	int cnt_ring=0,cnt_link=0;
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]=='-'){
			cnt_link++;
		}
		else{
			cnt_ring++;
			
		}
	}
	
	
	if(cnt_ring && cnt_link%cnt_ring!=0){
		cout<<"NO"<<endl;	
	}
	
	else
	cout<<"YES"<<endl;
	
	
	
}
