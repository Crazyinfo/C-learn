#include<stdio.h>
int main()
{int i,j,n;
int a[20]={1,1};
for(i=2;i<20;i++) a[i]=a[i-1]+a[i-2];
for(i=0;i<20;i++)
{if(a[i]%5==0) 
printf("%12d\n",a[i]);
else
printf("%12d",a[i]);}
return 0;
}
