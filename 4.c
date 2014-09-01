#include<stdio.h>
main()
{
int ret;
printf("Hello\n");
ret=fork();
printf("Hai...%d\n",ret);
}
