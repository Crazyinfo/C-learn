#include<stdio.h>
int main()
{int year,leap;
 printf("Enter year:");
 scanf("%d",&year);
 if(year%4==0)
 {if(year%100==0)
 {if(year%400==0)
 leap=1;
 else
 leap=0; 
 }
 else
 leap=0; 
 }
 else
 leap=0;
 if(leap==0)
 printf("不是闰年");
 else
 printf("是闰年");
 return 0;
 } 
