#include<stdio.h>
#include<sys/ipc.h>
#include<sys/sem.h>
main(int argc,char **argv)
{
int sid,val;
sid=semget(3,5,IPC_CREAT|0666);
perror("semget");
printf("%d\n",sid);
//val=semctl(sid,1,GETVAL);
//printf("val1=%d\n",val);

//val=semctl(sid,atoi(argv[1]),SETVAL,atoi(argv[2]));
//printf("val=%d\n",val);

val=semctl(sid,atoi(argv[1]),GETVAL);
printf("val1=%d\n",val);
}
