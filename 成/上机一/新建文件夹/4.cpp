#include<stdio.h>
int main()
{
int n,y,x,z,i;
x=0;y=1; 
printf("����һ��������") ;
scanf("%d",&n);
{for(i=1;i<=n;i++)
  {for(z=1;z<=i;z++) y=y*z;}
 x=x+y;}
printf("����ǣ�%d",x);
return 0;
}

