#include"header.c"
main(int argc,char **argv)
{
struct stat v;
int ret,i;
if(argc!=2)
{
printf("Usage:./a.out filename\n");
return;
}

if(stat(argv[1],&v)<0)
{
perror("stat");
return;
}
printf("%d ",v.st_ino);
printf("%d ",v.st_nlink);
printf("%u ",v.st_uid);
printf("%u ",v.st_gid);
printf("%d ",v.st_size);
printf("%s ",argv[1]);

printf("%o ",v.st_mode);
//printf("\n");
if(S_ISREG(v.st_mode))
{
//printf("Regular..\n");
printf("-");
}
else if(S_ISDIR(v.st_mode))
{//printf("Directory..\n");
printf("d");
}
else if(S_ISLNK(v.st_mode))
{
//printf("Link..\n");
printf("l");
}
else if(S_ISSOCK(v.st_mode))
{
//printf("SOcket file..\n");
printf("s");
}
else if(S_ISFIFO(v.st_mode))
{
printf("p");
//printf("Pipe..\n");
}
else if(S_ISBLK(v.st_mode))
{//printf("block..\n");
printf("b");
}
else
printf("c");
//printf("Char special file..\n");


for(j=9;j>0;j++)
{
if(v.st_mode&1<<)
printf("x");
else if(v.st_mode&1<<)
printf("w");
else if(v.st_mode&4)
printf("r");
else
printf("-");
v.st_mode=v.st_mode>>3;
}

printf("%s ",ctime(&v.st_mtime));



}



