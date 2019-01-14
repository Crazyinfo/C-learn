#include<stdio.h>
int main()
{double i,pai,m,n;
i=3;n=1;pai=4;m=1;
for(;i<=501;i=i+2)
{m=(-1)*m;
pai=pai+m*(1/i)*4;
n++;
}
printf("pai is %lf\n",pai);
return 0;
 } 
