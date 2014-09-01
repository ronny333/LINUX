#include"header.c"
main(int argc,char **argv)
{
struct stat v;
int ret;
if(argc!=2)
{
printf("Usage:./a.out filename\n");
return;
}

if(ret=stat(argv[1],&v)<0)
{
perror("stat");
return;
}
//printf("Size is %d\n",v.st_size);
//printf("inode no is %d\n",v.st_ino);
printf("type is %o\n",v.st_mode);
if(v.st_mode&(1<<16))
printf("Regular..\n");
else if(v.st_mode&(1<<15))
printf("Directory..\n");
else
printf("Another..\n");
}



