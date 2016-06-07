#include <stdio.h>
#include<string.h>

int main(void) {
	int x,c,i;
char s[100],a[100];
scanf("%s",s);
x=strlen(s);
c=x-1;
for(i=0;i<x;i++)
{
	a[c]=s[i];
	//	printf("%c",a[c]);
	c--;

}
for(i=0;i<x;i++)
printf("%c",a[i]);
//printf("%s",a);

	// your code goes here
	return 0;
}
