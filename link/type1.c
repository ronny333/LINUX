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

if(lstat(argv[1],&v)<0)
{
perror("stat");
return;
}
//printf("Size is %d\n",v.st_size);
//printf("inode no is %d\n",v.st_ino);
printf("type is %o\n",v.st_mode);
if(S_ISREG(v.st_mode))
printf("Regular..\n");
else if(S_ISDIR(v.st_mode))
printf("Directory..\n");
else if(S_ISLNK(v.st_mode))
printf("Link..\n");
else if(S_ISSOCK(v.st_mode))
printf("SOcket file..\n");
else if(S_ISFIFO(v.st_mode))
printf("Pipe..\n");
else if(S_ISBLK(v.st_mode))
printf("block..\n");
else 
printf("Char special file..\n");


}



