// Sonya and hotels
// problem said that,Print the number of cities where Sonya can build a new hotel so that the minimum 
//distance from this hotel to all others is equal to d.

// that means all coordinates  of the output hotels value and  the input hotel coordinates ----> must be the difference between them equal to d.
// as that case first hotel left and last hotel rigth after d distance there could be a hotel for each.
// for other hotels coordinates find the difference between adjacent hotels ,if difference is less than 2*d, then no hotel is possible between them.
// if difference is exactly 2*d ,then 1 hotel is possible between them.


//****This is the main logic****
// if difference is greater than 2*d ,then 2 hotel is possible between them. please check this point seriously with the condition of the output in the problem of codeforces.
// not more than 2 hotels is possible for difference greater than 2*d beacause for new hotel the minimum distance from this hotel to all others is equal to d. new hotel distance from left hotel must be d and new hotel distance form rigth hotel must be d.
// if we construct other hotel then given condition can not be satisfied


#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,d;
	
	cin>>n>>d;
	
	int arr[n];
	
	int cnt=2;
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
			
	}
	
	
	for(int i=1;i<n;i++){
		
		if(arr[i]-arr[i-1]==2*d){
			cnt++;
			
		}
		else if(arr[i]-arr[i-1]>2*d){
			cnt=cnt+2;;
			
		} 
		
	}
	
	cout<<cnt<<endl;
	
	
}
