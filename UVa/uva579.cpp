#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;


int main()
{
    double x,y,dif,p,q;
       while(scanf("%lf:%lf",&x,&y)==2)   // with c language help , semicolon " : " has witten , 
	                                        //without semicolon gives wrong answer
    {
        if(x==0 && y==0)
            break;

        p=((x*30)+(y/2));
        q=(y*6);

        dif=abs(p-q);  //absolute value by math.h header help    :P 

  

        if(dif>180)
            dif=360-dif;

        printf("%.3lf\n",dif);
    }
    return 0;
}
