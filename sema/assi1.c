#include"header.c"
main()
{
struct sembuf v;
int fd,i=0,semid;
char a[]="ABCDEFG";
fd=open("data2",O_RDWR|O_CREAT|O_APPEND,0666);
semid=semget(3,5,IPC_CREAT|0666);

v.sem_num=1;
v.sem_op=0;
v.sem_flg=0;
semop(semid,&v,1);
//semctl(semid,1,SETVAL,1);
while(a[i])
{
write(fd,&a[i],1);
semctl(semid,1,SETVAL,1);
i++;
sleep(1);

}
semctl(semid,1,SETVAL,0);
}
