#include <stdio.h>

int main(void) {
int num1,num2,num3;
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>=num2)
  {
  	if(num1>num3)
  	printf("num1 greater");
  	else
  		printf("num3 greater");
  }
  else 
  {
  		if(num2>num3)
  	printf("num2 greater");
  	else
  		printf("num3 greater");
  }


	return 0;
}
