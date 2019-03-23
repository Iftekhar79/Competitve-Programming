//Parity

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	unsigned long int n;
	int arr[1000];
	int i;
	int cnt;
	
	while(scanf("%lu",&n)==1){
		
		if(n==0)
		break;
		i=0;
		while(n!=0){
			arr[i]=n%2;
			n=n/2;
			i++;		
		}
		 cnt=0;
        printf("The parity of ");
        for(i=i-1;i>=0;i--)
        {
            printf("%d",arr[i]);
            if(arr[i]==1)
            cnt++;
        }
        printf(" is %d (mod 2).n",cnt);
        
        
	}
	
	return 0;
	
}
