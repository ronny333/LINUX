#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
int i;
for(i=1;i<argc;i++)
system(argv[i]);

}
