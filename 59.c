#include <stdio.h>
#include<string.h>

int main(void) {
	int count=0,num,i,n;
char s[10][100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%s",s[i]);
}
scanf("%d",&num);
for(i=0;i<n;i++)
{
	if(strlen(s[i])==num)
	count++;
}
printf("%d",count);


	// your code goes here
	return 0;
}
