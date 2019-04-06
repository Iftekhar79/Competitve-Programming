//  Bear and Reverse Radewoosh

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,c;
	int res,ans;
	
	int time_k,time_r;
	int point_limak,point_rade;
	
	cin>>n>>c;
	
	int a[n],b[n];
	
	for(int i=0;i<n;i++){
		
		cin>>a[i];
		
	}
	
	
	for(int i=0;i<n;i++){
		
		cin>>b[i];
		
	}
	
	
	
	
	time_k=0,point_limak=0;	
	for(int i=0;i<n;i++){
		
		
		time_k=time_k+b[i];
		
		res=a[i]-c*(time_k);
		
		point_limak=point_limak+max(0,res);
				
	}
	
	
	
	time_r=0,point_rade=0;
	
		
	for(int j=n-1;j>=0;j--){
		
		
		time_r=time_r+b[j];
		
		ans=a[j]-c*(time_r);
		
		point_rade=point_rade+max(0,ans);
		
		
		
	}
	
	
	if(point_limak>point_rade){
		cout<<"Limak"<<endl;
		
	}
	 else if(point_limak<point_rade){
		cout<<"Radewoosh"<<endl;
		
	}
	else 
	cout<<"Tie"<<endl;
	
	
	
}
