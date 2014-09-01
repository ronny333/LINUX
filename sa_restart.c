#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("In isr...\n");
//sleep(10);
}
main()
{
//if(fork()==0)
//{
//printf("In child..%d\n",getpid());
//while(1);
//}
//else

struct sigaction v,v1;
v.sa_handler=isr;
sigemptyset(&v.sa_mask);
v.sa_flags=SA_RESETHAND;
//v.sa_flags=0;
//v1.sa_handler=isr;
sigaction(2,&v,0);
while(1);

}
