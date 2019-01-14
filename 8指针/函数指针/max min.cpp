#include<stdio.h>   //用函数指针变量调用函数 
int max(int a,int b)
{
	int z;
	if(a>b) z=a;
	else z=b;
	return z;
}

int min(int a,int b)
{
	int z;
	if(a>b) z=b;
	else z=a;
	return z;
}

int main()
{
	int(*p)(int,int);
	int a,b,i;
	printf("Please choose 1 or 2:");
	scanf("%d",&i);
	printf("Please input two numbers:");
	scanf("%d %d",&a,&b);
	if(i==1)  p=max;
	if(i==2)  p=min;
	printf("%d",(*p)(a,b));
	return 0;
}
