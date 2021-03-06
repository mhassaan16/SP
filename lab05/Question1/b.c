#include <stdio.h>
#include <unistd.h>
int main(){

	uid_t ruid, euid, suid;
	gid_t rgid, egid, sgid;
	getresuid(&ruid, &euid, &suid);

	printf("My Real user-ID is: %d\n", (long)ruid);
	printf("My Effective user-ID is: %d\n", (long)euid);
	printf("My Saved Set-user-ID is: %d\n", (long)suid);

	getresgid(&rgid, &egid, &sgid);

	printf("My Real group-ID is: %d\n", (long)rgid);
	printf("My Effective group-ID is: %d\n", (long)egid);
	printf("My Saved Set-group-ID is: %d\n", (long)sgid);

    return 0;
}
