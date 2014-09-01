#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main()
{
if(fork()==0)
{
execlp("ls","ls",NULL);

}
else
{
if(fork()==0)
{
execlp("pwd","pwd",NULL);
}
else
{
execlp("cal","cal",NULL);

}

}

}
