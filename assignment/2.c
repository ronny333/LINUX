#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
int i;
char *p[50];

for(i=1;i<argc;i++)
{
p[i-1]=malloc(sizeof(argv[i])+1);
p[i-1]=argv[i];
printf("%s\n",p[i-1]);
}
printf("%d\n",i);
//strcpy(p[i-1],NULL);
p[i-1]=NULL;
execvp(p[0],p);

//}

}
