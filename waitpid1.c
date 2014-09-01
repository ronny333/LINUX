#include<stdio.h>
#include<stdlib.h>
main()
{
int i;
int a[3];
if(fork()==0)
{
sleep(2);
printf("Child1..\n");
exit(0);
}
else
{
if(fork()==0)
	{
	sleep(3);
printf("Child2..\n");
	exit(0);	
	}
	else
	{
		if(fork()==0)
		{
		sleep(5);
	printf("Child3..\n");
		exit(0);
		}
		else
			while((wait(0))>0)
			{
		{//printf("main parent..\n");
			printf("Child completed..\n");
			}
		}
	
	}

}

}
