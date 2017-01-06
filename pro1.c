#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void solveMeFirst(int n) {
    char s[100][100];
    int i,count=0,c[100],l=0,j,check,max,f=1;
  
  for(i=0;i<n;i++)
        {
    scanf("%s",s[i]);
    }
        for(i=1;i<n;i++)
        {
   for(j=0;s[0][j]!='\0'||s[i][j]!='\0';j++)
       {

       if(s[0][j]==s[i][j])
           {
          
           count++;
           
       }
       else
           {
         
           if(f==1)
               {
               check=count;
               
               max=count;
               f=0;
           }
           else 
           {
               if(count<=check)
                   {
                   max=count;
               }
             
           }
           count=0;
           break;
       }
        
   }
    
           
    }
if(max==0)
    printf("no common  prefix string is present");
    else
        {
for(i=0;i<max;i++)
    {
    printf("%c",s[0][i]);
}
    }    
    
}
int main() {

    int n;
    scanf("%d",&n);
    solveMeFirst(n);
    
}
