#include<stdio.h>
main()
{
int i;
if(fork()==0)
{	
	if(fork()==0)
	{

         	if(fork()==0)
   		{
	//	wait(0);
		system("ls");
		printf("------Child3...getpid=%d getppid=%d\n",getpid(),getppid());
		}
        
		else
		{
	//        wait(0);
		system("pwd");
		printf("--------Child2...getpid=%d getppid=%d\n",getpid(),getppid());
	
		}
	}
	else
	{
      // wait(0);
	system("cal");
	printf("-------Child1...getpid=%d getppid=%d\n",getpid(),getppid());

	}
}
else 
{	
	        wait(0);
system("date");
	printf("------Parent...%d\n",getpid());
}
	
}



