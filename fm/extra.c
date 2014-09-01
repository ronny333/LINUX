#include"header.c"
#include<fcntl.h>
main(int argc,char **argv)
{
char *a;
struct stat v;
int fd,fd1,i,j,tmp;
lstat(argv[1],&v);
//temp=v.st_mode;
//printf("tmp=%d\n",tmp);
a=malloc(v.st_size);
fd=open(argv[1],O_RDONLY);
if(fd==-1)
{
perror("open");
return;
}
read(fd,a,v.st_size);
printf("%s",a);
//close(1);
fd1=open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,v.st_mode);
write(fd1,a,v.st_size);

}
