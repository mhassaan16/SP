#include<stdlib.h>
#include<stdio.h>
#include<setjmp.h>
int counter=0;
static jmp_buf envbuf;

	void havefun()
	{ 
		printf("This is haveFun Function\n"); 
		printf("Value of Counter is : %d", counter);
		printf("\n");
		counter++;	
	}
	void setfirstjump()
	{ 
		printf("This is setfirstjump Function\n"); 
		printf("Value of Counter is : %d", counter);
		printf("\n");
		counter++;
}
int main()
{ 
	int i = 0; 
	for(i; i <10; i++)
	{
	     printf("---This is Main Function---\n"); 
		if (counter == 0 && (i = setjmp(envbuf)) == 0)
		  { 
               
			setfirstjump(); 
		  }
           
		havefun();
	 
	}
	return 0;  
}
