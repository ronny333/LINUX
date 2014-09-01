#include<stdio.h>
#include<unistd.h>
main(int argc,char **argv)
{
char *p[]={argv[1],argv[2],NULL};
execvp(p[0],p);


}
