#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
main()
{
int p[2];
pipe(p);
perror("pipe");
printf("p[0]=%d p[1]=%d\n",p[0],p[1]);
printf("%d\n",getpid());

char a[20],b[20];
	if(fork()==0)
	{
	read(p[0],b,20);
	printf("data is %s\n",b);
//	while(1);
	}
	else
	{
	printf("Enter data:");
	scanf("%s",a);
	write(p[1],a,strlen(a)+1);
	}
}
