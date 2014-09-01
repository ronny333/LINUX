#include"header.c"
#include<fcntl.h>
main(int argc,char **argv)
{
char *a;
struct stat v;
int fd,fd1,i,j;
lstat(argv[1],&v);
a=malloc(v.st_size);
fd=open(argv[1],O_RDONLY);
if(fd==-1)
{
perror("open");
return;
}
read(fd,a,v.st_size);
close(1);
fd1=open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0666);
printf("%s",a);
//write(fd1,a,v.st_size);

}
