#include<stdio.h>
#include <unistd.h>

int main()
{
	printf("My Real user-ID is: %d\n", (long)getuid());
	printf("My Effective user-ID is: %d\n", (long)geteuid());
	printf("My Real group-ID is: %d\n", (long)getgid());
	printf("My Effective group-ID is: %d\n", (long)getegid());

    return 0;
}
