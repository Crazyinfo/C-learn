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
 printf("��������");
 else
 printf("������");
 return 0;
 } 
