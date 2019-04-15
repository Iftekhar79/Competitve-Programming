//  Free Cash
//when people see cash is busy ,they left the place, to ensure service more cash desk is needed. so, maximum value of people arrival at the same time will be the ans.



#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int arr[24][60]={0};
	int max=0;
	int a,b;
	
	cin>>n;
	
	while(n--){
		
		cin>>a>>b;
		
		arr[a][b]++;
		
		
		if(arr[a][b]>max){
			max= arr[a][b];
			
		}
		
		
		
	}
	
	
	cout<<max<<endl;
	
	
}
