//Average speed

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int hr,min,sec;
	int hr1,min1,sec1;
	double km;
	int res;
	
	while(scanf("%d %d %d %f",&hr,&min,&sec,&km)!=EOF){
		
		     cin>>hr1>>min1>>sec1;
		     
		     cout<<hr1<<min1<<sec1;
		     res=(hr1-hr)*3600+(min1-min)*60+(sec1-sec);
		     cout<<(km/3600)*res<<endl;
		     
		     
	 }
	
}
