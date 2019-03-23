// Holiday

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int rem;
	
	cin>>n;
	
	rem=n%7;
	
	
	// ever week we get 2 holidayy's. for rem we get extra day. 
	//from those days to calculate min and max off days we should consider the week from which day should we start.
	// min case we find res for worst case. we try to make less holiday as possible by assuming the day's position, first day or last day of week . 
	// for max case we try to more holiday's if possible to make by day's position in week .
	
	
	
	if(rem==0){    // for min and max 2 holiday's is possible ein every week
		cout<<(n/7)*2<<" "<<(n/7)*2<<endl;
		
	}
	
	else if(rem==1){    // min 2 holiday's is possible in each week, for max case or best case one day extra will be added as rem is 1 ,so 1 holiday can be possible for that extra one day  
		cout<<(n/7)*2<<" "<<(n/7)*2+1<<endl;
	}
	
	
	else if(rem==6){       // for min as worst case 1 holiday is posible for that 6 days extra, for best case in max case 2 holiday could be possible .
		cout<<(n/7)*2+1<<" "<<(n/7)*2+2<<endl;
	}
	
	else { //if rem is 2,3,4,5   then for min of worst case no extra holiday is possible, for best case or max case 2 holiday is possible 
		cout<<(n/7)*2<<" "<<(n/7)*2+2<<endl;
	}
	
}
