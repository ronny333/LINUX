#include<stdio.h>
main()
{
if(fork())
{

system("date");

}
else
{

	if(fork()==0)
	{
	system("ls");
		//system("pwd");
		if(fork()==0)	
		{
		system("cal");
			if(fork()==0)
			system("pwd");
			
		}
		
		//else
		//wait(0);
	}

}

}

