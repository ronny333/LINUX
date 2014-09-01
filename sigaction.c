#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("In isr...\n");
sleep(10);
}
main()
{
struct sigaction v,v1;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
v.sa_flags=SA_RESETHAND|SA_NODEFER;
//v1.sa_handler=isr;
sigaction(2,&v,&v1);
sigaction(2,&v,&v1);
if(v1.sa_handler==SIG_IGN)
printf("Ignore..\n");
else if(v1.sa_handler==SIG_DFL)
printf("default..\n");
else
printf("isr..\n");

while(1);
}
