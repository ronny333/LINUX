#include"header.c"
//int pow1(int );
struct st
{
int page;
int tmp;
int dummy;
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
int n,n1,vm,ps,loc,b,bb,kk;
FILE *fp;
struct st v[5];
fp=fopen("input.c","r");
if(fp==NULL)
{
printf("FIle not present...\n");
return;
}
int i=0,page[5],j=0,k=0,q,ll;
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
			static int y=0,o=0;
	if(i%2==0)
	{
	int p;
	int tmp;
	tmp=atoi(s);
	v[j].page=tmp/ps;
	//printf("%d in %d page..\n",tmp,page);
//	for(j=0;j<loc;j++)
		if(j<5)
		{
		aa[j]=v[j].page;
		
		v[j].tmp=3;
		
			for(ll=0;ll<j;ll++)
			{
			c[ll]++;
		//if(c[y]==4)
		printf("=============%d\n",c[ll]);
			}
			for(kk=0;kk<5;kk++)
			{

			if(c[kk]==4)
			v[kk].tmp--;
//			y++;
			}
   	  printf("page NULL replaced by %d=%d..\n",v[j].page,v[j].tmp);
		}
		else 
		{
			int t;
			t=v[j].page;//save j>5 page int t
			if(o<5)
			{
			if(v[o].dummy==1)
			printf("page %d is dirty\n",v[o].page);
			else
			printf("page %d is not dirty\n",v[o].page);
			o++;
		
			}
			
			if(v[y].tmp==0)
			{
			printf("page %d replaced by %d\n",v[y].page,t);
			v[y].tmp=3;
			y++;
			}
			else
			{
				for(kk=0;kk<5;kk++)
				{
				if(c[kk]==4)
				v[kk].tmp--;
				}
				
				
				for(ll=0;ll<j-5;ll++)
				{
				if(ll<5)
				c[ll]++;
				}
				
				if(v[y].tmp!=0)
				{
					for(b=0;b<5;b++)
					{
					if(v[b].tmp!=0)
					v[b].tmp--;
					}		
				}
			
		//	k++;
			
			}

		}
			j++;
}
	else
	{
	if(j<5)
	{
	if(strcmp(s,"r")==0)
	v[j].dummy=1;
	else
	v[j].dummy=0;
	}



	}
i++;
}


}
