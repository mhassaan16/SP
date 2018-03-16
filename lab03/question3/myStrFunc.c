
int isPalindrome(char *array,int size)
{
	int midsize = 0;
	int notPalindrome = 0;
	for (int start = 0,end = size-1;start <= size/2 ; start++,end--)
	{
		if (array[start] != array [end])
			notPalindrome = 1;
	}
	if (notPalindrome == 0)
		return 1;
	else
		return -1;
}