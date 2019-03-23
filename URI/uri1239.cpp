#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>

using namespace std;


int main()

{

    char s1[1000],s2[1000];     //here,s1 is input string , and s2 will be output string;

    int i,p,len,l,star,under_score;     //star,under_score counts how many times they appear in a string line
    

   while(gets(s1) != NULL){       //except empty string it will operate the input string 
   	
   	   len=strlen(s1);               //string size of inputted string 
   	    
   	   
   	   p=0,star=0,under_score=0;       //s2 index starts from 0 to print <i>,</i>,<b>,</b>
   	   
   	   
   	   
   	   for(int i=0;i<len;i++,p++){      //for every charatcer p will be incremented as 1
   	   	
			
				
		 if(s1[i]=='*'){
				
				star++;                     //counts star's number, for every finding of under score output will be replaced by <b> or </b>
				
				if(star%2 !=0){               //if odd
					s2[p]='<';
					p++;
					
					s2[p]='b';
					p++;
					
					s2[p]='>';
					
					
					
				 }
				
				else if(star%2==0){           // if even
					s2[p]='<';
					p++;
					
					s2[p]='/';
					p++;
					
					s2[p]='b';
					p++;
					
					s2[p]='>';
					
					
					
					
			     }  				
			}
			
			
			
			
			else if(s1[i]=='_'){
				
				under_score++;                  //counts under score, for every finding of under score output will be replaced by <i> or </i>
				
				if(under_score%2 !=0){               //if odd , 
					s2[p]='<';
					p++;
					
					s2[p]='i';
					p++;
					
					s2[p]='>';
					
					
					
				}
				
				else if(under_score%2==0){              //if even
					s2[p]='<';
					p++;
					
					s2[p]='/';
					p++;
					
					s2[p]='i';
					p++;
					
					s2[p]='>';
					
								
				}			
			}
			
				
	  else
	     s2[p]=s1[i];
	     
	    
			
			   	   	
   	   	
   	   	
   	   	
   	   	
  }
   	   
   	     s2[p] = '\0';

        printf("%s\n",s2);           
	 
	     
			
   	   
   	
   	
   }

 

}
