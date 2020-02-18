// Leap Year or Not Leap Year and ...

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char y[100000];
	
    long long int i,leap,festive,y4,y15,y55,y100,y400;
    
    bool check=false;
    

	while(gets(y)){
		
		
		if(check)cout<<endl;
			check=true;
		
		
		leap=festive=y4=y15=y55=y100=y400=0;
		
		
		int len=strlen(y);
		
		
		for(i=0;i<len;i++){
			
			
			y4=((y4*10)+(y[i]-'0'))%4;
			y15=((y15*10)+(y[i]-'0'))%15;
			y55=((y55*10)+(y[i]-'0'))%55;
			y100=((y100*10)+(y[i]-'0'))%100;
			y400=((y400*10)+(y[i]-'0'))%400;
		
		}
		
		
		if((y4==0 && y100 !=0 ) || y400==0){
			
			cout<<"This is leap year."<<endl;
			leap=1;
			festive=1;
			
			
		}
		
		if(y15==0){
			cout<<"This is huluculu festival year."<<endl;
			festive=1;
		}
		
		if(y55==0 && leap==1){
			
			cout<<"This is bulukulu festival year."<<endl;
			
		}
		
		
		if(festive==0){
			
			cout<<"This is an ordinary year."<<endl;
			
		}
	
		
	}
	
}
