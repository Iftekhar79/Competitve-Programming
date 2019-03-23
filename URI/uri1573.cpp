//Chocolate Factory


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;
	int mul;
	double res;
	double ans;
	
	while(cin>>a>>b>>c){
		
		if(a==0 && b==0 && c==0)
		break;
		mul=a*b*c;
		res=cbrt(mul);
		ans=floor(res);
		
		cout<<ans<<endl;
		
		
		
		
		
		
	}
	
}
