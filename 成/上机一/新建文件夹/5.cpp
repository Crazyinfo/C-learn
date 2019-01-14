#include<stdio.h>
#include<math.h>
int main()
{double x,i,e,n,m;
for(i=1,e=0;fabs(e)>1e-6;i++)
{for(x=1,n=1;n<=i;n++)
{x=x*n;}
m=1/x;
e=e+m;
}
printf("%f",e);
return 0;
}
