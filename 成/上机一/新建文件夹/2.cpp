#include<stdio.h>
int main()
{int a,b,c,d,e,f,g;
scanf("%d",&a);
if(a>=10000)
{
b=a%10;
c=a%100/10;
d=a%1000/100;
e=a%10000/1000;
f=a/10000;
g=b*10000+c*1000+d*100+e*10+f;
printf("%d",g);
}
if(a>=1000&&a<10000)
{
b=a%10;
c=a%100/10;
d=a%1000/100;
e=a/1000;
g=b*1000+c*100+d*10+e;
printf("%d",g);
}
if(a>=100&&a<1000)
{
b=a%10;
c=a%100/10;
d=a/100;
g=b*100+c*10+d;
printf("%d",g);
}
if(a>=10&&a<100)
{
b=a%10;
c=a/10;
g=b*10+c;
printf("%d",g);
}
if(a>=1&&a<10)
{
printf("%d",g);
}
return 0;
}

