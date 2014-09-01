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

if(stat(argv[1],&v)<0)
{
perror("stat");
return;
}
printf("Size is %d\n",v.st_size);
printf("inode no is %d\n",v.st_ino);
printf("no of hard link is %d\n",v.st_nlink);
}



