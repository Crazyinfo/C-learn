#include<stdio.h>
int main()
{
	int factorial(int n);
	int n;
	scanf("%d",&n) ;
	printf("%d�Ľ׳�=%d",n,factorial(n));
	return 0;
}
int factorial(int n)
{
	int result;
	if(n<0)
	{
		printf("�������\n");
		return 0; 
	}
	else if(n==0||n==1)
	{
		result=1;
	}
	else
	{
		result=factorial(n-1)*n;//�������� 
	}
	return result;
}
