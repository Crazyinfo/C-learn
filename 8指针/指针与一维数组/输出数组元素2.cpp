#include<stdio.h>
int main()
{
	int a[5],i,*p;
	p=a;
	printf("�������������"); 
	for(i=0;i<5;i++)
	   scanf("%d",&a[i]);
	for(;p<(a+5);p++)
	   printf("%d",*p);
	  return 0; 
}
