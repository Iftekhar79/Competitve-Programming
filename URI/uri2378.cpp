// Elevator

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test,max_cap;
	
	int exit,enter;
	int arr[1001];

	cin>>test>>max_cap;
	int total=0;
	bool p=true;
	
	while(test--){
		
		cin>>exit>>enter;
		
		total=total+enter-exit;
		
		if(total>max_cap){
			cout<<"S"<<endl;
			p=false;
			break;	
		
		}
	}
	
   
   if(p){
   	cout<<"N"<<endl;
   	
   }
}
