// Text Volume

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
    cin>>n;
  
    char s[n];
    
    int cnt=0,ans=0;
    
	
	getchar();
    for(int i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
        
        
        if(s[i]>='A' && s[i]<='Z')
            cnt++;

        if(s[i]==' ')
        {
            ans=max(ans,cnt);
            cnt=0;
        }

    }
    
   
    ans=max(ans,cnt);
    
    cout<<ans<<endl;
	
	
}
