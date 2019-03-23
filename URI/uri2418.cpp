// Carnival

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	float a,b,c,d,e;
	float sum;
	
	cin>>a>>b>>c>>d>>e;
	
	
	float mn=min(a,min(b,min(c,min(d,e))));
	float mx= max(a,max(b,max(c,max(d,e))));
	sum=a+b+c+d+e;
     double res=sum-mn-mx;
     
     printf("%.1f\n",res);
     
	
	
    /*
    	if(mn==a && mx==b || mn==b && mx==a){
		sum= c+d+e;
		cout<<sum<<endl;
	}
	else if(mn==a && mx==c || mn==c && mx==a){
		sum= b+d+e;
		cout<<sum<<endl;
	}
	if(mn==a && mx==d || mn==d && mx==a){
		sum= b+c+e;
		cout<<sum<<endl;#
	}
	else if(mn==a && mx==e || mn==e && mx==a){
		sum= b+c+d;
		cout<<sum<<endl;
	}
	else if(mn==b && mx==c || mn==c && mx==b){
		sum= a+d+e;
		cout<<sum<<endl;
	}
	else if(mn==b && mx==d || mn==d && mx==b){
		sum= a+c+e;
		cout<<sum<<endl;
	}
	else if(mn==b && mx==e || mn==e && mx==b){
		sum= a+c+d;
		cout<<sum<<endl;
	}
	else if(mn==c && mx==d || mn==d && mx==c){
		sum= a+b+e;
		cout<<sum<<endl;
	}
	else if(mn==c && mx==e || mn==e && mx==c){
		sum=a+b+d;
		cout<<sum<<endl;
	}
	else if(mn==d && mx==e || mn==e && mx==d){
		sum= a+b+c;
		cout<<sum<<endl;
	}

    */
	
	
}
