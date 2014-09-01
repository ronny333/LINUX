#include<stdio.h>
#include<unistd.h>
main(int argc,char **argv)
{
int i;
for(i=1;i<argc;i++)
{
	if(fork()==0)
	{
	execlp(argv[i],argv[i],NULL);
	}
	else
	{
	wait(0);
	continue;
	}
}
	


}
