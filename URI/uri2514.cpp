// Lunar Alignment

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	int i;
	int gcd;

		
		for(i=1;i<=a && i<=b;i++){
			if(a%i==0 && b%i==0){
				gcd=i;
			}
		}
		
		return gcd;
	
	
}

int main(){
	
	int m,l1,l2,l3;
	int x,y,z,ans;
	cin>>m;
	cin>>l1>>l2>>l3;
	
	x=gcd(l1,l2);

 	y=(l1*l2)/x; 
	
	z=gcd(y,l3);   

	ans=(l3*y)/z;     

	
	
	cout<<ans-m<<endl;
	
	
}
