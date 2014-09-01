#include<stdio.h>
#include<stdlib.h>
main()
{
int i,ret;
if(fork())
{
printf("In parent..Before wait..\n");
ret=wait(&i);
printf("In parent..After wait..%d %d\n",ret,i>>8);
//sleep(3);
}
else
{
printf("In child..%d\n",getpid());
sleep(2);
exit(1);
}

}
