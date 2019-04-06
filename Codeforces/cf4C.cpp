// Registration system


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string s;
	
	map<string,int> m;    //declaring a ordered map. ordered map is not ordered by inserting it, ordered by mapping same inserted value
	
	cin>>n;
	
	while(n--){
		
		cin>>s;
		
		
		if(m[s]>0){       //m is the map name, and m[s] means how many times s string repeats it's appearance after first time of it's appearance
			cout<<s<<m[s]<<endl;
		}
		
		else
		cout<<"OK"<<endl;    //if first time appears,then just print ok
		
				
		m[s]++;       
		
	}
	

	
	
}

