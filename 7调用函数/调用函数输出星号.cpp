//printstar函数加上一个参数控制输出*的个数 
#include<stdio.h>
int main()
{
	void printstar(int x);
	int a;
	scanf("%d",&a);
	printstar(a);
	return 0;
	
}

void printstar(int x)
{
	int i;
	for(i=1;i<=x;i++)
	printf("*");
}
