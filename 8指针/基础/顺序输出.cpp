#include<stdio.h>
int main()
{
	int *p1,*p2,a,b,*p;          //没有改变a和b的值，实现两个值的交换 
	scanf("%d %d",&a,&b);
	p1=&a,p2=&b;
	if(a<b){
		p=p1;p1=p2;p2=p;
	}
	printf("a=%d,b=%d\n\n",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
	return 0;
 } 
