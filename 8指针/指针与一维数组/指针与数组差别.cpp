#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d",*(a+3));
	int i;
	for(i=0;i<5;i++)
	  printf("%d",*(a+i));//���ֿ��������ã����ǲ���a++�����ã������ָ��ָ�����p�������飬������p++ 
	return 0;
}
