#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void main(int argc,char**argv)
{
int buff[256];
int ffopen=1;
int fopen=open("/etc/shadow",0);
if(argc>1)
{
  ffopen=open(argv[1],O_CREAT|O_WRONLY,0777);
 
}

for(;;)
  {
    int n=read(fopen,buff,255);
    if(n<=0)
      break;
    write(ffopen,buff,n);
  }
}
