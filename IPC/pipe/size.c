#include<stdio.h>
#include<sys/ipc.h>
main()
{
char ch='a';
int p[2],c=0;
pipe(p);
while(write(p[1],&ch,1)>0)
{
c++;
printf("%d\n",c);
}


}
