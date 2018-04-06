#include <stdio.h>
#include <unistd.h>
int main(){
	uid_t ruid, euid, suid;
	gid_t rgid, egid, sgid;
	getresuid(&ruid, &euid, &suid);

	printf("My Real user-ID is: %ld\n", (long)ruid);
	printf("My Effective user-ID is: %ld\n", (long)euid);
	printf("My Saved Set-user-ID is: %ld\n\n\n", (long)suid);

        getresgid(&rgid, &egid, &sgid);

	printf("My Real group-ID is: %ld\n", (long)rgid);
	printf("My Effective group-ID is: %ld\n", (long)egid);
	printf("My Saved Set-group-ID is: %ld\n", (long)sgid);

	int rv = setuid(501);
	if (rv != -1){
		getresuid(&ruid, &euid, &suid);
		printf("\n\nAfter seteuid(501) the IDs are:\n");
		printf("My Real user-ID is: %ld\n", (long)ruid);
		printf("My Effective user-ID is: %ld\n", (long)euid);
		printf("My Saved Set-user-ID is: %ld\n", (long)suid);
                getresgid(&rgid, &egid, &sgid);
	        printf("My Real group-ID is: %ld\n", (long)rgid);
	        printf("My Effective group-ID is: %ld\n", (long)egid);
	        printf("My Saved Set-group-ID is: %ld\n", (long)sgid);

	}
	else
		printf ("Error in setting ID\n");

return 0;
}

/*
If the process is the superuser, the seteuid() function sets the effective user ID to uid.
If the process is not the superuser, and uid is equal to the real user ID or saved set-user ID, seteuid() sets the effective user ID to uid.
The real and saved user IDs aren't changed.
*/
