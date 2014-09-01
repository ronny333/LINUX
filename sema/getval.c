#include<stdio.h>
#include<sys/ipc.h>
#include<sys/sem.h>
main()
{
int sid,val;
sid=semget(3,5,IPC_CREAT|0666);
perror("semget");
printf("%d\n",sid);
val=semctl(sid,1,SETVAL,2);

printf("val=%d\n",val);
}
