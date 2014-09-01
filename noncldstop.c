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
while(1);
//sleep(10);
}
else
{
struct sigaction v,v1;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
//v.sa_flags=SA_NOCLDSTOP|SA_NODEFER;
v.sa_flags=SA_NOCLDSTOP;
//v1.sa_handler=isr;
sigaction(17,&v,0);
while(1);
}
}
