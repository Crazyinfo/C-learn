#include<stdio.h>   //用指向函数的指针作函数参数：把函数的地址作为参数传递到其他函数 
void main()
{
	int max(int,int);
	int min(int,int);
	int sum(int,int);
	int process(int,int,int(*fun)(int,int));//几个参数应该都申明出来。 
	int a,b;
	printf("Please input two numbers:");
	scanf("%d %d",&a,&b);
	printf("max=");
	process(a,b,max);
	printf("min=");
	process(a,b,min);
	printf("sum=");
	process(a,b,sum);
}

int max(int x,int y)
{
	int z;
	if(x>y) z=x;
	else z=y;
	return z;
}

int min(int x,int y)
{
	int z;
	if(x>y) z=y;
	 else z=x;
	return z;
}

int sum(int a,int b)
{
	int z;
	z=a+b;
	return z;
}

int process(int a,int b,int(*fun)(int a,int b))
{
	int z;
	z=(*fun)(a,b);
	printf("%d\n",z);
}
