#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d",*(a+3));
	int i;
	for(i=0;i<5;i++)
	  printf("%d",*(a+i));//数字可以这样用，但是不能a++这样用，但如果指定指针变量p等于数组，可以用p++ 
	return 0;
}
