#include <stdio.h>
#include "myMath.h"
#include "myStr.h"

int main()
{

	int a =23;
	int b =32;

	printf("Initially A is :");
	printf("%d",a);
	printf("\n");

	printf("Initially B is :");
	printf("%d",b);
	printf("\n");
	

	if (isEqual(a,b) == 1 )
		printf("Equal \n" );
	else
		printf("Not Equal \n");
	swap(&a,&b);
	
	printf("Now A is :");
	printf("%d",a);
	printf("\n");

	printf("Now B is :");
	printf("%d",b);
	printf("\n");


	char *c = "abba";
	if(isPalindrome(c,4)==1)
		printf("It is palindrome \n");
	else
		printf("It is not Palindrome \n");
	return 0;
}
