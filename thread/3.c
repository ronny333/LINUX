#include"header.c"
void *t_1(void *p)
{
//while(1)
//sleep(5);
printf("%s",(char *)p);
printf("In thread 1..\n");
pthread_exit("byeee");
}
/*void *t_2(void *p)
{
while(1)
printf("In thread 2..\n");
}*/
main()
{
char *p;
pthread_t t1,t2;
pthread_create(&t1,NULL,t_1,"hello");
//pthread_create(&t2,NULL,t_2,"hell");

pthread_join(t1,&p);
printf("In main..%s\n",p);
while(1);




}


