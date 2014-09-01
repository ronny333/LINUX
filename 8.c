//Orphan process
#include<stdio.h>
main()
{
if(fork())
{
printf("Parent..%d\n",getpid());
sleep(2);
}
else
{
printf("Child..%d\n",getppid());
sleep(5);
printf("Child2...getpid=%d getppid=%d\n",getpid(),getppid());//orphan
sleep(1);
}
}
