// 1305 - Area of a Parallelogram
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int test;
    int ax,ay,bx,by,cx,cy,dx,dy;
    int ar1,ar2;
   
    long long res,ans;
   
   
    cin>>test;
   
    for(int i=1;i<=test;i++){
       
        cin>>ax>>ay>>bx>>by>>cx>>cy;
       
        dx=ax+cx-bx;
        dy=ay+cy-by;
       
       
        ar1=ax*by+bx*cy+cx*dy+dx*ay;
        ar2=ay*bx+by*cx+cy*dx+dy*ax;
       
       
         res=abs(ar1-ar2);
       
        ans=res/2;
       
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<ans<<endl;
       
       
    }
   
   
}
