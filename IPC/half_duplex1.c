#include"header.c"

main()
{
int fd,fd1;
char a[20],b[20];
mkfifo("f1",0666);
mkfifo("f2",0666);
while(1)
{
fd=open("f1",O_RDWR);
fd1=open("f2",O_RDWR);

read(fd,a,20);
printf("%s\n",a);
printf("Enter data:");
scanf("%s",b);
write(fd1,b,strlen(b)+1);


}



}
