//The numeber of positions




#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int n,a,b;
	//check whether it is appropriate to the conditions a<=i-1 and n<=i+b (for i from 1 to n).
	// The first condition can be converted into a+1<=i, and second condition n-b<=i 
	// then the general condition can be written max( a+1,n-b) and then our answer can be calculated by the formula 
	// n-max(a+1,n-b)+1.

	cin>>n>>a>>b;
	
	int res=n-max(a+1,n-b)+1;
	
	cout<<res<<endl;
	
	
}
