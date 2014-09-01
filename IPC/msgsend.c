#include"header.c"
#include<sys/msg.h>
#include<sys/ipc.h>
struct msbuf
{
long mtype;
char data[20];

};


main()
{
struct msbuf v,v1;
int msgid;
msgid=msgget(3,IPC_CREAT|0666);
perror("msgget");
printf("%d\n",msgid);

v.mtype=3;
strcpy(v.data,"hello");
msgsnd(msgid,&v,strlen(v.data)+1,0);
perror("msgsnd");

v1.mtype=4;
strcpy(v1.data,"hiiiii...");
msgsnd(msgid,&v1,strlen(v1.data)+1,0);
perror("msgsnd");





}
