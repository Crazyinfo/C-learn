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
	printf("������һ������С��1000����Ȼ����");
	scanf("%d",&x);
	printf("һ�����Ի��%d����",f(x));
	return 0; 
}
