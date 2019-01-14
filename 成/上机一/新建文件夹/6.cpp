#include<stdio.h>
int main()
{printf("1\n");
int x,i,n;
for(x=1;x<=1000;x++)
{for(i=1,n=0;i<x;i++)
{if(x%i==0) n=n+i;
}
if(n==x) printf("%d\n",x);
else continue;}
return 0;
}
