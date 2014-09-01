#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main(int argc,char **argv)
{
char *p[5];
int i;
int j=0,k;
int set;
for(i=1;i<argc;i++)
{
p[i-1]=malloc(sizeof(argv[i]+1));
p[i-1]=argv[i];
//p[i-1]=NULL;
printf("%d %s\n",i-1,p[i-1]);

}
p[i-1]=NULL;
for(i=0;i<argc-1;i++)
printf(" %d now...%s\n",i,p[i]);
/*for(i=0;p[i];i++)
{
if(p[i]==' ')
set=1;
}
printf("set=%d",set);
*/for(i=0;i<argc-1;i++)
{
if(fork()==0)
	{
//printf("child..pid=%d ppid=%d\n",getpid(),getppid());
//	execl(argv[i],argv[i],NULL);
//	exit(0);
	}
	while(wait(0)>0)
	{	
//printf("Another..child..pid=%d ppid=%d\n",getpid(),getppid());
execvp(p[i],p);	
//execlp(argv[i],argv[i],NULL);
//	printf("Process complete..%s\n",argv[i]);
	}	
}
//for(i=0;i<argc;i++)
}
