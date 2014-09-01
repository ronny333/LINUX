#include<stdio.h>
main()
{
	if(fork())
	{
		printf("parent..%d\n",getpid());
		wait(0);
	}
	else
	{
		printf("child1...%d %d\n",getpid(),getppid());
		
		if(fork()==0)
		{
			printf("child2...%d %d\n",getpid(),getppid());
			if(fork()==0)
			{
				printf("child3...%d %d\n",getpid(),getppid());
			}

		}

	}
while(1);
}
