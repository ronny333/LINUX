#include<stdio.h>
#include<pthread.h>
void t_1(void *p)
{
printf("%s",(char *)p);
printf("In thread..\n");
}
main()
{
pthread_t t1;
pthread_create(&t1,NULL,t_1,"hello");
while(1);
}
