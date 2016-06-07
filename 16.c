#include <stdio.h>

int main(void) {
	int num1,num2,i,j,f=0;
	scanf("%d%d",&num1,&num2);
for(i=num1;i<=num2;i++)
{f=0;
	for(j=2;j<=i/2;j++)
	{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
printf("%d\n",i);
}
	// your code goes here
	return 0;
}
