#include<stdio.h>
#include<stdlib.h>

int main(){

     
	 int size=10;
         int *arr1 = (int*) malloc (sizeof(int) * size);
         for(int i=0;i<10;i++)
	   {
		arr1[i] =i;
	   }

         for(int i=0;i<10;i++)
	   {

      		printf("%d\n", arr1[i]);
      		
	   }

printf("---After Reallocation---\n");

    int newsize= size*2;
    int *arr2 = (int*) realloc (arr1,sizeof(int) *newsize);

       arr1 = arr2;


         for(int i=0;i<newsize;i++)
	   {

       		arr2[i] =i;
	   }

         for(int i=0;i<newsize;i++)
	   {

      		printf("%d\n", arr2[i]);
      		
	   }
	free(arr2);

return 0;
}
