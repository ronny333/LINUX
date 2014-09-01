#include<stdio.h>
main()
{
if(fork()==0)
{

printf("Child 1...%d\n",getppid());
sleep(1);
}
else
{
	if(fork()==0)
	{
	printf("Child2..%d\n",getppid());	
	sleep(1);
	}
	else
	{
		if(fork()==0)
		{
		
		printf("Child3..%d\n",getppid());	
		sleep(1);
		}
		else
		{
		printf("Parent...%d\n",getpid());
		}

	}
sleep(1);
}

}
