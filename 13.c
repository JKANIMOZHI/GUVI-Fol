#include <stdio.h>

int main(void) {
	int n,i,f=0;
	scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
	if(n%i==0)
	{
		f=1;
		break;
	}
}
	if(f==0)
	printf("the given number is prime");
	else
		printf("the given number is not a prime");
	// your code goes here
	return 0;
}
