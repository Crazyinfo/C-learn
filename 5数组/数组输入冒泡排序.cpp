#include<stdio.h>
int main()
{int i,j,t;
int a[5];
printf("input 5 number:\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("\n");
for(i=0;i<5;i++)
{for(j=0;j<5-i;j++)
{if(a[j]<a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}}}
printf("the sorted numbers:\n");
for(i=0;i<5;i++) 
{printf("%d ",a[i]);}
return 0;}
