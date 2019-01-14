#include<stdio.h>
int f(int n)
{
	if(n==1) return 1;
	if(n==2) return 2;
	else if(n%2==0) return f(n-2)+f(n/2);
	else if(n%2==1) return f(n-1);
}
int main()
{
	int x;
	printf("请输入一个数字小于1000的自然数：");
	scanf("%d",&x);
	printf("一共可以获得%d个数",f(x));
	return 0; 
}
