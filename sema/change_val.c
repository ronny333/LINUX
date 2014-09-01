#include<stdio.h>
#include<sys/ipc.h>
#include<sys/sem.h>
main()
{
int sid,val,val1;
sid=semget(3,5,IPC_CREAT|0666);
perror("semget");
printf("%d\n",sid);
val=semctl(sid,1,GETVAL);
printf("val=%d\n",val);

val1=semctl(sid,1,SETVAL,4);
printf("val1=%d\n",val1);

}
