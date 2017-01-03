
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,num[100],num1[200]={0},max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&num[i]);
         num1[num[i]]++;
        if(num[i]>max)
            max=num[i];
    }
    for(i=0;i<n;i++)
        {
       if(num1[num[i]]==1)
            printf("%d",num[i]);
    }


}
