// Telescope

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t_area;
	int s_photon;
	
	int test,cnt=0;
	
	cin>>t_area;
	cin>>test;
	
	while(test--){
		cin>>s_photon;
		
		if(t_area*s_photon>=40000000){
			cnt++;
		}
		
		
		
	}
	cout<<cnt<<endl;
	
}
