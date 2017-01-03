#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void position(int n,int *arr)
    {
    int i;
    for(i=0;i<n;i++)
        {
        if(i==arr[i])
           printf("%d",arr[i]);
    }
}
int main() {

   int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    position(n,arr);


}
