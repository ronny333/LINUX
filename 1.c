#include<stdio.h>
main()
{
int i;
printf("Hello world..%d\n",getpid());
scanf("%d",&i);
printf("i=%d\n",i);
sleep(5);
printf("After sleep");
while(1);
}
