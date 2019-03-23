#include<iostream>
#include<stack>


using namespace std;

int main(){
	int q;
	int arr[1001];
	
	
	int n;
	int cnt=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		if(arr[i]==1){
	
			cnt++;
		}
	
		}
	
	cout<<cnt<<endl;
	
	
	
		for(int i=1;i<n;i++){
	
		
		if(cnt>1 && arr[i]==1){
	 
			cout<<arr[i-1]<<" ";
		}
		    
	
		}
	
	
	cout<<arr[n-1]<<endl;
	
	

}
