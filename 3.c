
#include<stdio.h>
main(int argc,char **argv)
{
int i;
printf("in main..\n");
for(i=0;i<argc;i++)
system(argv[i]);
printf("vellle..");
}
