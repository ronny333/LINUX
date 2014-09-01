#include<stdio.h>
#include<stdlib.h>
main()
{
int i,a[5];
srand(time());

for(i=0;i<5;i++)
a[i]=rand()%100;
for(i=0;i<5;i++)
printf("%d ",a[i]);

printf("\n");
}
