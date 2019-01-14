#include<stdio.h>
int main()
{float e=1,a,m,n,i;
scanf("%f",&n);
for(a=1;a<=n;a++)
{m=1;
for(i=1;i<=a;i++)
{m=m*i;}
e=e+(1/m);}
printf("e=%f\n",e);
return 0;
}
