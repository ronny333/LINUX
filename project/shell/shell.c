#include"header.c"

void func2(char a[15]);
void func1(char a[10]);
struct st 
{
	int c;
	char ch[20];
	int pid;
	struct st *next;
};
void add_begin(struct st **ptr,char *p,int cc)
{
	struct st *tmp;
	tmp=malloc(sizeof(struct st));
	strcpy(tmp->ch,p);
	tmp->c=cc;
	tmp->next=*ptr;
	*ptr=tmp;

}
void print(struct st *ptr)
{
	static int i=0;
	while(ptr&&i<5)
	{
		printf("%d %s\n",ptr->c,ptr->ch);
		ptr=ptr->next;
		i++;
	}

}
main(int argc,char **argv)
{
	int j=1,jj=0;
	char a[20];
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
		int cc=0,xx=0,x=0;
		static int c=1;
		char ch[10],ch1,tmp[10];
		struct st *headptr=0;
aa:		while(1)
		{
			//struct stat v;
			printf("<%d Ronil>",c++);
			gets(ch);
				add_begin(&headptr,ch,c-1);
			
			if(strcmp(ch,"hist")==0)
			{
				print(headptr);
			}
			else if(strcmp(ch,"pid")==0)
			{
				printf("%d\n",getpid());
				//print(headptr);
			}
			else if(strcmp(ch,"ppid")==0)
			{
				printf("%d\n",getppid());
				//print(headptr);
			}
			else if(strcmp(ch,"quit")==0)
			{
				
				return;
			}
			else
			{	
				for(cc=0;ch[cc];cc++)
				{
					if(ch[cc]==';')
						{
						func2(ch);//func2(ch);
						break;
						}
					else if(ch[cc]=='|')
						{
						func1(ch);
						break;
						}
					else
					{
						if(fork()==0)
						{
							execlp(ch,ch,NULL);
						}
						else
						{
							wait(0);
						//	add_begin(&headptr,ch);
							goto aa;

						}
					}
				}
			}
		}

	}

}

void func2(char a[15])
{
int i=0,j=0,k=0;
char tmp[5][10];
for(;a[i]!=';';i++,j++)
tmp[k][j]=a[i];
tmp[k][j]='\0';
printf("%s\n",tmp[0]);
i++;
k++;
for(j=0;a[i]!=';';i++,j++)
tmp[k][j]=a[i];
tmp[k][j]='\0';
printf("%s\n",tmp[1]);
i++;
k++;
for(j=0;a[i];i++,j++)
tmp[k][j]=a[i];
tmp[k][j]='\0';
printf("%s\n",tmp[2]);

if(fork())
{
	wait(3);
	execlp(tmp[2],tmp[2],NULL);
	
}
else
{

	if(fork())
	{
		wait(2);
		execlp(tmp[1],tmp[1],NULL);
		exit(3);
	}
	else
	{
		execlp(tmp[0],tmp[0],NULL);
		exit(2);
		
	}

}

}
void func1(char a[10])
{

char tmp[5][10];
int i=0,j,k=0;
int p[2];
pipe(p);
for(i=0;a[i]!='|';i++);
i++;
for(j=0;a[i]!=' ';j++,i++)
tmp[k][j]=a[i];
tmp[k][j]='\0';
printf("%s\n",tmp[0]);//grep
k++;
i++;
for(j=0;a[i];j++,i++)
tmp[k][j]=a[i];
tmp[k][j]='\0';
printf("%s\n",tmp[1]);//pts/0
i=0,j=0;
k++;

for(i=0;a[i]!=' ';i++,j++)
tmp[k][j]=a[i];
tmp[k][j]='\0';
printf("%s\n",tmp[2]);//ps

k++;
i++;
for(j=0;a[i]!='|';i++,j++)
tmp[k][j]=a[i];
tmp[k][j]='\0';

printf("%s\n",tmp[3]);//-l

if(fork()==0)
{
close(0);
dup(p[0]);
close(p[1]);
execlp(tmp[0],tmp[0],tmp[1],NULL);
}
else
{
close(1);
dup(p[1]);
close(p[0]);
execlp(tmp[2],tmp[2],tmp[3],NULL);
}
return;
}
