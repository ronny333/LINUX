#include<stdio.h>
main(int argc,char **argv)
{
int i,j,k;
if(fork()==0)
{
i=atoi(argv[1]);
j=atoi(argv[2]);
k=i+j;
exit(k);
}
else
{
wait(&k);
k=k>>8;
printf("Sum is %d\n",k);
}



}
