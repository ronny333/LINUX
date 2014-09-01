#include"header.c"
main()
{
int fd,fd1;
char a[20],b[20];
mkfifo("f1",0666);
mkfifo("f2",0666);
//if(fork())
while(1)
{
fd=open("f1",O_RDWR);
fd1=open("f2",O_RDWR);
printf("Enter data:");
scanf("%s",a);
write(fd,a,strlen(a)+1);

read(fd1,b,20);
printf("%s\n",b);

}



}
