#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,s,area,x;
scanf("%f%f%f",&a,&b,&c);
x=a+b;
if (c>=x) 
    printf("No Answer\n") ;
else
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%f\n",area);
return 0;
}
