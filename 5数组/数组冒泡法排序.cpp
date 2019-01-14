//冒泡排序法：两两依次比较，并做交换，交换的次数最多。
//选择排序法是每次循环找到最值，循环结束后调整到合适的位置，交换次数最少。 
#include<stdio.h>
int main()
{
	int a[6]={4,5,7,2,9,0};
	int i,j,t;
	for(j=0;j<6;j++)
	{for(i=0;i<6-j;i++)
	if(a[i]>a[i+1]) {t=a[i];a[i]=a[i+1];a[i+1]=t;}}
	for(i=0;i<6;i++) 
	printf("%d ",a[i]);
	return 0;
}
