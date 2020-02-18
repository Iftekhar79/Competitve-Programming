//Back to Intermediate Math

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
	double t1,t2,t3;
     double d,v,u;
	int count=1;
	
	long long n;
	cin>>n;
	
	while(n--){
	
	cin>>d>>v>>u;
	
	if(v>=u)
    cout<<"Case "<<count<<": "<<"can't determine\n";
	
	else {
		
		t1=d/u;
		t2=(d/(sqrt(u*u-v*v))); //without parethesis of the whole equation it gives wrong answer on submission
		
		t3=t2-t1;
		
		if(t3<=0){
		    cout<<"Case "<<count<<": "<<"can't determine\n";
		}
		
		else{
		
		cout<<"Case "<<count<<": ";
		printf("%.3lf\n",t3);
	  }
	}
	count++;
	
  }
}
