//2nd disadvantage of signal(),before complition of 10 sec if anothe signal come than execute new signal

#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("In isr..\n");
sleep(10);
printf("After sleep...\n");
}
main()
{
printf("%d\n",getpid());
signal(2,isr);
while(1);
}

