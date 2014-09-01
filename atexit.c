#include<stdio.h>
#include<stdlib.h> 
void at_exit(void);
void at_exit1(void);

main()
{
atexit(at_exit);
atexit(at_exit1);
printf("Hello...\n");
}
void at_exit(void)
{
printf("Byeee...\n");
}
void at_exit1(void)
{
printf("hai....\n");
}
