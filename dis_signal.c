//disadvantage of signal(),not possible to get current action

#include<stdio.h>
#include<signal.h>
main()
{
void (*p)(int);
p=signal(3,SIG_IGN);
if(p==SIG_IGN)
printf("Ignore..\n");
else if(p==SIG_DFL)
printf("default..\n");
else
printf("In isr..\n");

}

