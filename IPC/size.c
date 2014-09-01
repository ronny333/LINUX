#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
main()
{
int c=0;
char ch='a';
int p[2];
//pipe(p);
pipe2(p,O_NONBLOCK);
perror("pipe2");
printf("p[0]=%d p[1]=%d\n",p[0],p[1]);

while(write(p[1],&ch,1)>0)
{
c++;
}
printf("%d\n",c);
}



