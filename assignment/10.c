#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	int a[3];
	if(fork()==0)
	{
		sleep(rand()%3+1);
		printf("Child1..\n");
		exit(1);
	}
	else
	{
		if(fork()==0)
		{
			sleep(rand()%5+1);
			printf("Child2..\n");
			exit(2);	
		}
		else
		{
			if(fork()==0)
			{
				sleep(rand()%12+1);
				printf("Child3..\n");
				exit(3);
			}
			else
				while((wait(&i))>0)
				{
					i=i>>8;
					if(i==1)
						printf("Child1 completed..\n");
					else if(i==2)
						printf("Child2 completed..\n");
					else
						printf("Child3 completed..\n");

				}

		}

	}

}
