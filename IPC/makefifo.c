#include"header.c"
#include<fcntl.h>
#include<string.h>
main()
{
char a[20];
int fd;
mkfifo("f1",0666);
perror("mkfifo");

fd=open("f1",O_RDWR);
printf("pid=%d\n",getpid());

printf("Enter data..\n");
scanf("%s",a);

write(fd,a,strlen(a)+1);

}
