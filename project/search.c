#include"heaader.c"
void search(char **,char *);
main(int argc,char **argv)
{
int i=0,j;
char *tmp[10];
struct dirent *p;
DIR *dp;
dp=opendir(".");
if(dp==NULL)
{
perror("opendir");
return;
}

while((p=readdir(dp))!=NULL)
{
//printf("beeee%s\n",p->d_name);
if(((p->d_name[0]=='.'))||(!strcmp(p->d_name,"..")))
continue;
tmp[i++]=p->d_name;
//printf("affff%s\n",p->d_name);
}
tmp[i]='\0';
//for(j=0;j<i;j++)
//printf("%s\n",tmp[j]);
search(tmp,argv[1]);
}

void search(char **p,char *q)
{

int i=0,ret;
char *tmp[20];
DIR *dp;
struct stat v,v1;
static int count=0;
while(p[i])
{
if(!strcmp(p[i],q))
{
count++;

}
if(S_ISDIR(v.st_mode))
{
dp=opendir(p[i]);
i++;
continue;
///goto abc;
//search(p,q);

}
i++;
}

printf("count=%d\n",count);

}



