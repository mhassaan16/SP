#include<stdlib.h>
#include<stdio.h>
#include"myMath.h"
int main()
{
	if(isEqual(1,3) == 1)
	{
		printf("Numbers are Equal");
	}
	else
	{
		printf("Numbers are Not Equal\n");
	}	
	
	int a=5;
	int b=4;
	swap(&a,&b);
	printf("After Swaping Numbers are :");
	printf("%d %d",a,b);

	return 0;
}
