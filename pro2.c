#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
    {
    int num,re[100],i,j=0,k,temp,l,num1,result;
   
    scanf("%d",&num);  //printf("Enter the num");
    num1=num;
    scanf("%d",&k); //printf("Enter the k digit");
    if(num<0)
        
        num=num*(-1);
    while(num!=0)
        {
        re[j]=num%10;
        j++;
        num=num/10;
    }
    for(i=1;i<j;i++)
        {
        for(l=0;l<j-1;l++)
            {
            if(re[l]>re[l+1])
                {
                temp=re[l];
                re[l]=re[l+1];
                re[l+1]=temp;
            }
        }
    }
 
  if(num1>0)
        {
    for(i=0;i<(j-k);i++)
        {
     result*=10;
  result+=re[i];
    }
        printf("%d",result);
    }
    else if(num1<0)
        {
         for(i=j-1;i>=k;i--)
             {
              result*=10;
              result+=re[i];
         }
        printf("%d",result*(-1));
    }
}
