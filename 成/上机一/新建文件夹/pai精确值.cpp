#include<stdio.h>
#include<math.h>
int main()
{double x,y,arctan1,arctan2,i,m,pai,n;
x=1/2;y=1/3;arctan1=1/2;arctan2=1/3;
for(i=3,m=1;fabs(arctan1)>1e-6;i+=2)
{m=(-1)*m;
n=pow(x,i)/i*m;
arctan1=arctan1+n;}
for(i=3,m=1;fabs(arctan2)>1e-6;i+=2)
{m=(-1)*m;
n=pow(y,i)/i*m;
arctan2=arctan2+n;}
pai=arctan1+arctan2;
printf("%f,%f,%f",arctan1,arctan2,pai);
return 0;
}
