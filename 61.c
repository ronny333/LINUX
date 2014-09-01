#include<stdio.h>
main()
{
if(fork())
{
printf("Parent..%d\n",getpid());
sleep(4);
}
else
{
printf("Child1...getpid=%d getppid=%d\n",getpid(),getppid());
sleep(1);

	if(fork()==0)
	{
		printf("Child2...getpid=%d getppid=%d\n",getpid(),getppid());
		
	
         	if(fork()==0)
   		{
		printf("Child3...getpid=%d getppid=%d\n",getpid(),getppid());
	        }

       }


}
/*else 
{
	sleep(3);	
	printf("Parent...%d\n",getpid());
	
}
*/	
}



