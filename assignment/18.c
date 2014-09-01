#include<stdio.h>
#include<signal.h>
static 
void my_isr(int n)
{
static int c1=0,c2=0;
if(n==2)
{
c1++;
}
else if(n==3)
{
c2++;
} 
if(c2==2)
signal(3,SIG_DFL);
if(c1==4)
signal(2,SIG_DFL);

}
main()
{

signal(2,SIG_IGN);
signal(3,SIG_IGN);
signal(2,my_isr);
signal(3,my_isr);
while(1);
}
