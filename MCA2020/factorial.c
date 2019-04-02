#include<stdio.h>
void main()
{
int fact=1,i,n;
printf("ENTER A NUMBER:");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("FACTORIAL OF N IS %d",fact);
}
