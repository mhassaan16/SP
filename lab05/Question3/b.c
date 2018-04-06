#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int main(){
    int f = fork();
    int status;
   if (f == -1){
         printf("FORK FAILED");
       exit(1);
    }
   if (f == 0){
        exit(-1);
        printf("My child PID is: %ld\n", (long)getpid());
	printf("My child PPID is: %ld\n", (long)getppid());
    }
 else{
        wait(&status);
      if (WIFEXITED(status)){
        printf("Normal Termination,Exit Status =%d\n",WEXITSTATUS(status));     
      }
       printf("My PID is: %ld\n", (long)getpid());
	printf("My PPID is: %ld\n", (long)getppid());
    }
      
return 0;
}

