// Arya and Bran

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	int x;
	
	int sum=0,given=0,cnt=0;
	cin>>n>>k;
	
	while(n--){
		
		cin>>x;	
		sum=sum+x;           //total candles
		given=min(8,sum);    //max 8 candles can given each day
		
		
		sum=sum-given;    //find candles aften giving at least 8 candles
		k=k-given;        // by giving, reach desired total candles
		
		cnt++;
		
		if(k<0)
	    	break;
		
		
	}
	
	
	if(k>0)
	cout<<-1<<endl;
	else
	cout<<cnt<<endl;
	
	
}
