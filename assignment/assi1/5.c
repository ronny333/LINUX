#include<stdio.h>
main()
{
if(fork()==0)
{
printf("X+1...%d %d\n",getpid(),getppid());

}
else
{

if(fork()==0)
{
//child2
printf("x+2...%d %d\n",getpid(),getppid());
}
else
{
	if(fork()==0)
	{
	printf("X+3...%d %d\n",getpid(),getppid());
	}
	else
	{		
	sleep(4);
	printf("X...%d %d\n",getpid(),getppid());
		
	}
}

}
}





