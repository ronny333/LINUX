#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("In isr...\n");
}
main()
{
if(fork()==0)
{
printf("In child..%d\n",getpid());
sleep(3);
//while(1);
}
else
{
struct sigaction v,v1;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
v.sa_flags=0;
//v.sa_flags=SA_NOCLDWAIT;
//v1.sa_handler=isr;
sigaction(17,&v,0);
while(1);
}
}
