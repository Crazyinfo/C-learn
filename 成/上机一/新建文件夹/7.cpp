#include<stdio.h>
int main()
{float m,x,h,n;
int i;
scanf("%f,%f",&h,&n);
if(n>=2)
for(i=1,m=h,x=h;i<n;i++)
{m=m+x;
x=x/2;
}
else
m=h;
printf("%f",m);
return 0;
}
