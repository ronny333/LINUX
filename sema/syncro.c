#include"header.c"
main()
{
int fd,i=0;
char a[]="abcdefgh";
fd=open("data",O_RDWR|O_CREAT|O_APPEND,0666);
while(a[i])
{
write(fd,&a[i],1);
i++;
sleep(1);
}
}
