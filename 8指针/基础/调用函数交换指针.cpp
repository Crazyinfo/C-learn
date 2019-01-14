#include<stdio.h>
int main()
{
int num1;
int num2;
int Swap(int *x,int *y);
printf("Please input num1 and num2:");
scanf("%d%d",&num1,&num2);
Swap(&num1,&num2);
printf("num1=%d,num2=%d\n",num1,num2);
return 0;
}
int Swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
return 0;
}
//在调用函数中，只能从实际参数到形式参数，不能倒过来。所以该调用函数需要用到指针变量 

