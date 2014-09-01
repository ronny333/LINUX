#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main(int argc,char **argv)
{
char *p[5];
int i;
//int j=0,k;
int set;
for(i=1;i<argc;i++)
{
p[i-1]=malloc(sizeof(argv[i]+1));
p[i-1]=argv[i];
printf("%d %s\n",i-1,p[i-1]);

}
p[i-1]=NULL;
for(i=0;i<argc-1;i++)
printf(" %d now...%s\n",i,p[i]);
for(i=1;i<argc;i++)
{
if(fork()==0)
	{
	}
	while(wait(0)>0)
	{	
//execvp(p[i],p);	
	execlp(p[i-1],p[i-1],NULL);
         printf("*********\n");
	}	
}
}
