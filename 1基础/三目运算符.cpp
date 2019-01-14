#include<stdio.h>
int main()
{
	int money,price;
	printf("请输入moeny和price:\n");
	scanf("%d%d",&money,&price);
	printf("我们买不买呢");
	printf("%c\n",price<=money ? 'yes':'no');//也称条件运算符 
	return 0; 
 } 
 
//C语言中条件运算符是唯一的一种三目运算符 
