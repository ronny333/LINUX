#include<stdio.h>
#include<unistd.h>
main(int argc,char **argv)
{
int i;
for(i=1;i<argc;i++)
system(argv[i]);


}
