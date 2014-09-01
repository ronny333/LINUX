#include<stdio.h>
main()
{
if(fork()==0)
{
printf("Child1...getpid=%d getppid=%d\n",getpid(),getppid());


	if(fork()==0)
	{
		printf("Child2...getpid=%d getppid=%d\n",getpid(),getppid());
		
	
         	if(fork()==0)
   		{
		printf("Child3...getpid=%d getppid=%d\n",getpid(),getppid());
	        }

       }


}
else 
{
	sleep(3);	
	printf("Parent...%d\n",getpid());
	
}
	
}



