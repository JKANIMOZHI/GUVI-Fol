#include <stdio.h>

int main(void) {
	int n,i=0,r,or;
	scanf("%d",&n);
	or=n;
	while(n!=0){
		r=n%10;
		i=i*10+r;
		n=n/10;
		
		
	}
	if(i==or)
	printf("the given number is palindrome");
	else
		printf("the given number is not a palindrome");
	// your code goes here
	return 0;
}
