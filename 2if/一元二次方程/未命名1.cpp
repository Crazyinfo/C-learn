#include <stdio.h>
#include <math.h>
int main()
{double a,b,c,disc,x1,x2,p,q,h,k;
scanf("%lf%lf%lf",&a,&b,&c);
disc=b*b-4*a*c;

if(disc>=0)
{
p=-b/(2.0*a);
q=sqrt(disc)/(2.0*a);
x1=p+q;x2=p-q;
printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
}
else
{
p=-b/(2.0*a);
h=sqrt(-disc)/2.0*a;
printf("x1=%f+%fi,x2=%f-%fi",p,h,p,h);
}
return 0;
}
