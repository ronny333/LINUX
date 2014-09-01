#include"header.h"
struct st
{
int num;
char ch[20];
int pid;
struct st *next;
};
void func(char *h);
void add_begin(struct st **headptr,char *);
void print(struct st *headptr);
main(int argc,char **argv)
{
char choise;
if(argc==1)
{
system("clear");
goto aa;
}
if(strcmp(argv[1],"-c")==0)
{
char *p[]={argv[2],argv[3],NULL};
execvp(p[0],p);
}
else
{
int j;
struct st *headptr=0;
static int count=0;
char ch1[20];
aa:while(1)
   {
	printf("<Ronil->%d>",++count);
	gets(ch1);
	add_begin(&headptr,ch1);
	if(strcmp(ch1,"hist")==0)
	{
	print(headptr);
	goto aa;
	}
	else if(strcmp(ch1,"pid")==0)
	{
	printf("pid=%d\n",getpid());
	goto aa;
	}
	else if(strcmp(ch1,"exit")==0)
	{
	return;
	}
	else
	{
	
	for(j=0;ch1[j];j++)
	{
	if(ch1[j]=='|')
	{
	func(ch1);
	break;	
	}

	}

	if(fork()==0)
	{
	execlp(ch1,ch1,NULL);
	}
	else
	{
	wait(0);
	}
	
	goto aa;
	
	}
   }
}
}
void add_begin(struct st **ptr,char *pp)
{
static int c=1;
struct st *tmp;
tmp=malloc(sizeof(struct st));
//printf("Enter roll no and name:");
//scanf(" %d %s",&tmp->num,tmp->ch);
//tmp->pid=getpid();
strcpy(tmp->ch,pp);
tmp->num=c++;
tmp->next=*ptr;
*ptr=tmp;
}
void print(struct st *p)
{
int i=0;
while(p&&i<5)
{
printf("%d %d %s\n",p->num,p->pid,p->ch);
p=p->next;
i++;
}
}
void func(char *h)
{


}
