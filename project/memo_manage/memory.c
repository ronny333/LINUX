#include"header.c"
//int pow1(int );
struct st
{
int page[5];
int tmp[5];
//int count[5];
};

int pow1(int n)
{
int mul=1,i;
for(i=0;i<n;i++)
mul=mul*2;
return mul;
}

main(int argc,char **argv)
{
char s[10];
int n,n1,vm,ps,loc;
FILE *fp;
struct st v[5];
fp=fopen("input.c","r");
if(fp==NULL)
{
printf("FIle not present...\n");
return;
}
int i=0,page[5],j=0,k=0;
 int c[5]={0,0,0,0,0},aa[10];	
char m[6][20];
n=atoi(argv[1]);
vm=pow1(n);
n1=atoi(argv[2]);
ps=pow1(n1);
printf("vm=%d ps=%d\n",vm,ps);
printf("No of pages are:%d\n",vm/ps);

loc=atoi(argv[3]);
for(i=0;i<6;i++)
bzero(m[i],20);

i=0;
while(fscanf(fp,"%s",s)!=EOF)
{
	if(i%2==0)
	{
	int tmp;
	tmp=atoi(s);
	v[j].page[j]=tmp/ps;
	//printf("%d in %d page..\n",tmp,page);
//	for(j=0;j<loc;j++)
		if(j<5)
		{
		aa[j]=v[j].page[j];
		v[j].tmp[j]=3;
   	  printf("page NULL replaced by %d=%d..\n",v[j].page[j],v[j].tmp[j]);
		/*if(c==4)
		{
		v[j].tmp[j]--;
		printf("v.tmp=%d\n",v[j].tmp[j]);
		}
		c++;*/
		}
		else 
		{
		int t;
//		goto aaa;
		static int y=0;
		t=v[j].page[j];//save j>5 page int t
//		printf("t=======%d\n",t);
			if(c[y]==4)
			{
			v[y].tmp[y]--;
			y++;
			}
			else
			{
			c[y]++;
			}
			if(v[y].tmp[y]==0)
			{
			printf("page %d replaced by %d\n",v[y].page[y],t);
			}
		k++;
		}
	j++;
	}
	else
	{
	static int l=0;
	static int v1=0;
	if(l<5){
	strcpy(m[l],s);
	printf("Dummy   %d -- %s\n",l,m[l]);	

	}
       for(i=0;i<5;i++)
	printf("%s\n",m[i]);
//	aa[l]=v[l].page[l];
//	printf("%s %d\n",s,aa[l]);
		if(j>5)
		{
	
		if(v1<5)
		{
		printf("m[%d]== %s \n",v1,m[v1]);
		if(strcmp(m[v1],"w")==0)
		printf("page %d is dirty page..\n",aa[v1]);
		else
		printf("page %d is not  dirty page..\n",aa[v1]);
		
		v1++;
		}
		}
		
//	printf("Dummy   %d -- %s\n",l,m[l]);	
	l++;
	}
i++;
}


}
