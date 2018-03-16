#include <stdio.h>
#include "myStr.h"

int main()
{
	char *a = "abba";
	if(isPalindrome(a,4)==1)
		printf("It is palindrome \n");
	else
		printf("It is not Palindrome \n");

	return 0;
}
