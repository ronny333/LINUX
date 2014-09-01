#include<stdio.h>
#include<signal.h>
void my_fun(int n)
{
static c1=0,c2=0;
c1++;
c2++;
printf("Hiii...%d\n",n);
if(c1==4)
signal(2,SIG_DFL);
if(c2==2)
signal(3,SIG_DFL);

}
main()
{
//static c1,c2;
signal(2,SIG_IGN);
signal(3,SIG_IGN);

signal(2,my_fun);
signal(3,my_fun);
while(1);
}
