#include<stdio.h>
#include<stdlib.h>

int main(){
     
      int *p1,*p2,*p3,*p4;
     	printf("sbrk(0) before malloc(4): 0x%x\n", sbrk(0));
     p1= (int *) malloc( sizeof(int)* 1);
   	printf("sbrk(0) after p1: 0x%x\n",sbrk(0));
     p2= (int *) malloc(4);
	printf("sbrk(0) after p2: 0x%x\n",sbrk(0));
     p3= (int *) malloc(4);
 	printf("sbrk(0) after p3: 0x%x\n",sbrk(0));
     p4= (int *) malloc(4);
	printf("sbrk(0) after p4: 0x%x\n",sbrk(0));

printf("p1 = 0x%x, p2= 0x%x, p3 = 0x%x, p4= 0x%x\n ",p1,p2,p3,p4);

free(p1);
free(p2);
free(p3);
free(p4);

return 0;
}
