#include"header.c"
void *thread1(void *p)
{
char a[20];
int fd;
fd=open("f2",O_RDWR);
while(1)
{
scanf("%s",a);
write(fd,a,strlen(a)+1);
}
}
void *thread2(void *p)
{
char b[20];
int fd;
fd=open("f1",O_RDWR);
while(1)
{
//scanf("%s",a);
read(fd,b,20);
printf("%s\n",b);
}
}


main()
{
char *p;
pthread_t t1,t2;
mkfifo("f1",0666);
mkfifo("f2",0666);
pthread_create(&t1,NULL,thread1,NULL);
pthread_create(&t2,NULL,thread2,NULL);
while(1);
}
