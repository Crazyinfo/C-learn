#include<stdio.h>   //�ú���ָ��������ú��� 
void main()
{
	int max(int,int);
	int(*p)(int,int);
	p=max;
	int c,a,b;
	printf("Please input two numbers:");
	scanf("%d %d",&a,&b);
	c=(*p)(a,b);
	printf("%d",c);
}

int max(int x,int y)
{
	int z;
	if(x>y) z=x;
	 else z=y;
	return z;
}
