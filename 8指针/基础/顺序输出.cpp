#include<stdio.h>
int main()
{
	int *p1,*p2,a,b,*p;          //û�иı�a��b��ֵ��ʵ������ֵ�Ľ��� 
	scanf("%d %d",&a,&b);
	p1=&a,p2=&b;
	if(a<b){
		p=p1;p1=p2;p2=p;
	}
	printf("a=%d,b=%d\n\n",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
	return 0;
 } 
