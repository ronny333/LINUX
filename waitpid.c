#include<stdio.h>
#include<stdlib.h>
main()
{
int ret,i;
if((fork())==0)
{
sleep(2);
printf("Child1..\n");
exit(2);
}
else
{
if((fork())==0)
	{
	sleep(3);
printf("Child2..\n");
exit(3);
	}
	else
	{
	if((fork())==0)
	{
	sleep(5);
printf("Child3..\n");
	exit(4);
		}
		else
		{

			while((wait(&i))>0)
		{
		i=i>>8;
		if(i==2)
		printf("1st child completed..\n");
		else if(i==3)
		printf("2nd child completed..\n");
		else if(i==4)
		printf("3rd child completed..\n");
		}}
	
	}

}

}
