#include<stdio.h>
static int n;
void isr(int i)
{
printf("%d\n",n);
n--;
if(n==0)
raise(9);
else
alarm(n);
}
main()
{
printf("Enter the no:");
scanf("%d",&n);
alarm(n);
signal(14,isr);
while(1);
}
