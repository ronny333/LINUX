#include"header.c"
#include<dirent.h>
void search(char *a,char **tmp);
main(int argc,char **argv)
{
int i=0,j;
char *temp[30];
DIR *dp;
struct dirent *p;
dp=opendir(".");
while((p=readdir(dp))!=NULL)
{
temp[i]=malloc(20);
temp[i++]=p->d_name;
}
temp[i]='\0';
j=i;
//printf("%s\n",argv[1]);
search(argv[1],temp);
//for(i=0;i<j;i++)
/*{
if(strcmp(argv[1],temp[i])==0)
printf("File found..\n");
}*/


}
void search(char *a,char **tmp)
{
struct stat v,v1;
int i=0,j;
char *temp[30];
DIR *dp;
struct dirent *p;

dp=opendir(".");

while((p=readdir(dp))!=NULL)
{
temp[i]=malloc(20);
temp[i++]=p->d_name;
}
temp[i]='\0';
j=i;
//search(temp,j);

//for(i=0;i<j;i++)
//printf("%s\n",tmp[i]);
for(i=0;i<j;i++)
{
if(strcmp(a,temp[i])==0)
printf("File found..\n");
stat(temp[i],&v);
if(S_ISDIR(v.st_mode))
{
printf("In..\n");
//search(a,temp[i]);
}

}

//search();
}



