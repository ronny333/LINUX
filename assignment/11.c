#include<stdio.h>
#include<stdlib.h>
main()
{
int i,ret,j=0;
int a[3];
if((a[1]=fork())==0)
{
sleep(rand()%3+1);
printf("Child1..,%d\n",getppid());
exit(1);
}
else
{
if((a[2]=fork())==0)
	{
sleep(rand()%5+1);
printf("Child2..,%d\n",getppid());
	exit(2);	
	}
	else
	{
		if((a[3]=fork())==0)
		{
		sleep(rand()%12+1);
		printf("Child3..,%d\n",getppid());
		exit(3);
		}
		else
			{
			while(wait(&i)>0)
			{
			j++;
			
			i=i>>8;
			if(i==1)
			printf("Child1 completed..\n");
			else if(i==2)
			printf("Child2 completed..\n");
			else
			printf("Child3 completed..\n");
			if(j==2)
			break;
			}
		while(1);
		}
	
	}

}

}
