// Blackjack

#include<bits/stdc++.h>

using namespace std;

int  main(){
	
	
	int n;
	
	cin>>n;
	
	if((n>=1 && n<=10) || (n>=22 && n<=25)){
		cout<<0<<endl;
	}
	
	else if((n>=11 && n<=19) || (n==21)){       // 1 queen of spade is already used which value is 10. to sum up n, the only one card should take form each suits .
												// for n==21 ,there can use only ace, there are four aces,whose value is either 1 or 11, here we use 11,so ans is four.
		cout<<4<<endl;
		
	}
	
	else if(n==20){   //all tens, jacks, queens and king from 4 suits, 1 queen of spade which point is 10 is already used, so 15 cards .
		cout<<15<<endl;
		
	}
	
}
