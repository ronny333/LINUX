#include<stdio.h>
void isr(int n)
{
printf("In isr..\n");
//wait(0);

}
main()
{
if(fork()==0)
{
sleep(5);

}
else
{
signal(17,isr);
//wait(0);
while(1);
}

}
