#include<stdio.h>
#include<stdlib.h>
main()
{
int ret,i;
if(fork()==0)
{
int n;
n=rand()%10+11;
printf("n=%d\n",n);
if(n>5)
{
exit(n);
//sleep(n);
}
else
sleep(n);
//if(n>=5)
}
else
{
sleep(5);
	if((ret=wait(&i))>0)
	{
	i=i>>8;
	if(i>=5)
	kill(ret,9);
	}
}


}
