#include<stdio.h>
#include<unistd.h>
#include<string.h>
main()
{
int p[2];
pipe(p);
perror("pipe");
printf("p[0]=%d p[1]=%d\n",p[0],p[1]);

printf("%d\n",getpid());
if(fork()==0)
{
char b[20];
read(p[0],b,20);
printf("In child..\n");
printf("Data:%s\n",b);
//while(1);
}
else
{
char a[20]="RD..";
//printf("");
write(p[1],a,strlen(a)+1);

}


}
