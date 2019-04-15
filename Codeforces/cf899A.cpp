// Splitting in teams

// every team is formed by 2 people group and 1 people group, 3 people each team
// so, if 1 people group is greater than 2 people group then total team could made = 2 people total group + (one people total group - two people group )/3
// else 1 people group is less than 2 people group,then total number of one group will be output,as because rest of 2 member group can't made a team.  

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int num;
	
	cin>>n;
	
	int cnt1=0,cnt2=0;
	
	while(n--){
		
		cin>>num;
		
		if(num==1){
			cnt1++;
			
		}
		else 
		cnt2++;
		
	}
	
	
	int ans;

	if(cnt1>cnt2){    
		ans=cnt2+(cnt1-cnt2)/3;
		cout<<ans<<endl;
		
	}
	
	else 
	cout<<cnt1<<endl;
	
	
	

	
	
	
}

