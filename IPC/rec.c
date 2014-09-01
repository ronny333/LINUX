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

//v.mtype=3;
//strcpy(v.data,"hello");
msgrcv(msgid,&v,20,3,0);
perror("msgrcv");
printf("%s\n",v.data);
msgrcv(msgid,&v1,20,4,0);
perror("msgrcv");
printf("%s\n",v1.data);





}
