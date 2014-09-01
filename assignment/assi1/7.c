#include<stdio.h>
main()
{
if(fork())
{
system("ls");
}
else
{
	system("pwd");
	if(fork()==0)
	{
		system("cal");
		if(fork()==0)	
		{
		system("date");
		}
		else
		wait(0);
//	exit(3);
	}
	else
	wait(0);


//wait(0);


}





}

