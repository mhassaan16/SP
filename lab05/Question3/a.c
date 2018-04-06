#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	int cpid;
	cpid = fork();

     if (cpid == -1)
      {
	    printf("Fork Failed\n");
	    exit(1);
      }

     if (cpid == 0)
     {
	printf("I m Child and my PID is:%ld\n", (long)getpid());
	printf("I m Child and my PPID is:%ld\n", (long)getppid());
     }
     else
      {
	wait(NULL);
	printf("I m Parent and my PID is:%ld\n",(long)getpid());
	printf("I m Parent and my PPID is:%ld\n",(long)getppid());
      }
    return 0;
}
