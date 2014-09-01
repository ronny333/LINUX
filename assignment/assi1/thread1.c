#include<stdio.h>
#include<pthread.h>
void *thread1(void *p)
{
while(1)
printf("In thread1...\n");
}
void *thread2(void *p)
{
while(1)
printf("In thread2...\n");
}
main()
{
pthread_t t1,t2;
pthread_create(&t1,NULL,thread1,NULL);
pthread_create(&t2,NULL,thread2,NULL);
while(1);

}
