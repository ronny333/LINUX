#include<stdio.h>
main()
{
if(fork())
{
int ret;
printf("In main..Before wait..\n");
ret=wait(0);
printf("In main..After wait..%d\n",ret);
}
else
{
printf("In child..%d\n",getpid());
sleep(3);
}
}
