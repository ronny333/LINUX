#include<stdio.h>
main()
{
if(fork()==0)
{
sleep(1);
system("pwd");
printf("-------Child1...getpid=%d getppid=%d\n",getpid(),getppid());


	if(fork()==0)
	{
	system("cal");
		printf("--------Child2...getpid=%d getppid=%d\n",getpid(),getppid());
		
	
         	if(fork()==0)
   		{
	system("date");
		printf("------Child3...getpid=%d getppid=%d\n",getpid(),getppid());
	        }

       }


}
else 
{
system("ls");
	printf("------Parent...%d\n",getpid());
	sleep(5);	
	
}
	
}



