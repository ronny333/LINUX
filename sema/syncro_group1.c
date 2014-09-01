#include"header.c"
main()
{
struct sembuf v;
int fd,i=0,semid,t=0;
char a[]="abcdefg";
fd=open("extra",O_RDWR|O_CREAT|O_APPEND,0666);
semid=semget(3,5,IPC_CREAT|0666);

v.sem_num=1;
v.sem_op=0;
v.sem_flg=0;
semop(semid,&v,1);
while(a[i])
{
t=0;
semctl(semid,1,SETVAL,1);
while(t<4)
{
write(fd,&a[i],1);
t++;
}
i++;
semctl(semid,1,SETVAL,0);

sleep(1);
//semop(semid,&v,1);

}
}
