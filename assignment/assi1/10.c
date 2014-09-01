#include<stdio.h>
#include<stdlib.h>
main()
{
int i;
if(fork()==0)
{//child1
sleep(rand()%10+1);
exit(2);
}
else
{
	if(fork()==0)
	{//child2
	sleep(rand()%10+1);
	exit(3);
	
	}
	else
	{
		if(fork()==0)
		{//child3
		sleep(rand()%10+1);
		exit(4);

		}
		else
		{//main parent
		while(wait(&i)!=-1)
		{
		i=i>>8;
		if(i==2)
		printf("1st child completed..\n");
		else if(i==3)
		printf("2nd child completed..\n");
		else 
		printf("3rd child completed..\n");
		}

		}

	}


}





}
