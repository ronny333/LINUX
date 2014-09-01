#include"header.c"
main()
{
int i=0,size;
char *p,ch;
FILE *fp;
fp=fopen("make1.c","r");
fseek(fp,0,SEEK_END);
size=ftell(fp);
printf("%d\n",size);
p=malloc(size+1);
while((ch=fgetc(fp))!=EOF)
p[i++]=ch;
p[i]='\0';

printf("%s\n",p);

}
