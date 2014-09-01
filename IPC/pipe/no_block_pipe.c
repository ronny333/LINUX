#include<stdio.h>
#include<sys/ipc.h>
#include<fcntl.h>
main()
{
char ch='a';
int p[2],c=0;
pipe2(p,O_NONBLOCK);
while(write(p[1],&ch,1)>0)
{
c++;
}

printf("%d\n",c);

}
