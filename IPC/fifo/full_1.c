#include<stdio.h>
#include<sys/ipc.h>
#include<fcntl.h>
#include<string.h>
//#include<dirent.h>
main()
{
	char a[20],b[20];
	int fd,fd1;
	mkfifo("f1",0666);
	perror("mkfifo1");
	mkfifo("f2",0666);
	perror("mkfifo2");
	while(1)
	{
		fd=open("f1",O_RDWR);
		fd1=open("f2",O_RDWR);
		printf("pid=%d\n",getpid());
		if(fork()==0)
		{
			printf("Enter data:");
			scanf("%s",b);
			write(fd,b,strlen(b)+1);
		}
		else
		{
			read(fd1,a,20);
			printf("now data is:%s\n",a);
		}
	}
}
