//Valera and Antique Items

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,v;
	int k,s;
	vector<int> ans; 		//initializing vector
	bool check;
	
	cin>>n>>v;

		
	for(int i=0;i<n;i++){   // n times sellers
	  check=false;   		//initially false, untill found price less than the price valera has
		
		cin>>k;             // number of items a seller have
		
	for(int j=0;j<k;j++){
			
			cin>>s;        //each item price
			
			if(!check && v>s){      //once it beacomes true ,then if it get price less than valera has more than one time that doesnot make any difference, beacuse here said bool check must be false. 
									//after finding price less than valera has it becomes true, so further less value is not countable 
				check=true;         // if any price found less than valera has ,makes the statement always true
				ans.push_back(i);   // if any seller item price less than valera ,then that i-th seller will be in vector
				
			}
			
		}
		
	}
	
	cout<<ans.size()<<endl;
	
	for(int i=0;i<ans.size();i++){
		
		cout<<ans[i]+1<<" ";
		
		
	}
	cout<<endl;
	
	
}
