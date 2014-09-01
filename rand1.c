#include<stdio.h>
#include<stdlib.h>
main()
{
int i;
int a[5],b;
srand(time());
//int t=5;
for(i=0;i<5;i++)
a[i]=(rand()%50+25);

for(i=0;i<5;i++)
{
b=a[i];
printf("%f\n",(float) (b)/100);
}
printf("\n");
}
