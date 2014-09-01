#include<stdio.h>
main()
{
if(fork()==0)
{
system("pwd");
printf("-------Child1...getpid=%d getppid=%d\n",getpid(),getppid());


	if(fork()==0)
	{
system("cal");
		printf("--------Child2...getpid=%d getppid=%d\n",getpid(),getppid());
		
	
         	if(fork()==0)
   		{
system("ls");
		printf("------Child3...getpid=%d getppid=%d\n",getpid(),getppid());
	        }

       }


}
else 
{
system("date");
	printf("------Parent...%d\n",getpid());
	sleep(3);	
	
}
	
}



