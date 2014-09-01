#include"header.c"
#include<string.h>
main()
{
struct stat v,v1;
int i=0,j=0,size,k=0;
static char *p,ch,q[50],*tmp,*tmp1,*a,r[30]="cc -c ",last[30]; 
FILE *fp;
fp=fopen("make1.c","r");
i=1;
rewind(fp);
a=malloc(50);
//]="cc -c ";
while(fgets(q,50,fp)!=NULL)
{
tmp=malloc(10);
tmp1=malloc(10);

k=0;
	if(i==2)
	{
	strcpy(last,q);
//	printf("lastttttt......%s\n",last);
system(last);
	}
	if((i%2))
	{
	j=0;

//	printf("j=%d\n",j);
		if(i>=3)
		{
		for(j=0;q[j]!=':';j++)
		tmp[j]=q[j];
	
		tmp[j]='\0';
		j++;
	
		for(;(q[j]!='\n')&&(q[j]!=NULL);k++,j++)
		tmp1[k]=q[j];
		tmp1[k]='\0';
printf("tmp=%s tmp1=%s\n",tmp,tmp1);
	if(stat(tmp,&v)<0||stat(tmp1,&v1)<0)
	{
printf("innnnnn.....");
			strcpy(a,"cc -c ");
		//	printf("a====%s\n",a);	
			strcat(a,tmp1);
			strcat(a," -o ");
			strcat(a,tmp);
			printf("a====%s\n",a);	
			
			system(a);
			bzero(a,50);
	}
	else
	{
	//stat(tmp,&v);
	//stat(tmp1,&v1);
			if(v1.st_mtime>v.st_mtime)
			{
			strcpy(a,r);
			strcat(a,tmp1);
			strcat(a," -o ");
			strcat(a,tmp);
	//		printf("%s\n",a);	
			system(a);
			bzero(a,50);
			}
		}
	}
	}

	if(v1.st_mtime==v.st_mtime)
	printf("makefile upto date..\n");	
i++;

}



}
