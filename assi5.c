#include<stdio.h>
main()
{
if(fork()==0)
{
	if(fork()==0)
	{
		if(fork()==0)
		{
printf("x+3...pid=%d ppid=%d\n",getpid(),getppid());

		}
		else
		{
printf("x+2...pid=%d ppid=%d\n",getpid(),getppid());
	sleep(2);

		}
	}
	else
	{
	printf("x+1...pid=%d ppid=%d\n",getpid(),getppid());
	sleep(3);
	}
}
else
{
printf("x...pid=%d ppid=%d\n",getpid(),getppid());
sleep(4);
}




}
