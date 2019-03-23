//  New Year and the Christmas Ornament

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int yellow,blue,red;
	
	cin>>yellow>>blue>>red;
	
	int res=min(yellow+2,min(blue+1,red));
	
	cout<<res*3-3<<endl;
	
	
	
}
