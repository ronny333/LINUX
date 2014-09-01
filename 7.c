#include<stdio.h>
main()
{
int ret=10;
printf("Hello..\n");
if(fork()==0)
{
printf("Child..%d\n",ret);
}
else
{
ret=20;
printf("Parent..%d\n",ret);

}
}
