#include<stdio.h>
int main()
{
	int a[5];int i; int *p;
	printf("请输入五个数：");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	return 0;
}
