#include<stdio.h>   //����ָ��ֵ�ĺ��� 
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};   //�������飬��ųɼ� 
	float *search(float(*pointer)[4],int n);                 //�������� 
	float *p;
	int i,k;
	printf("enter the number of stduent:");
	scanf("%d",&k);              //����Ҫ��ѧ������� 
	printf("The scores of No.%d are:\n");
	p=search(score,k);                   //����search����������score[k][0]�ĵ�ַ 
	for(i=0;i<4;i++)
	  printf("%5.2f\t",*(p+i));
	printf("\n");
	return 0;
}

float *search(float(*pointer)[4],int n)   
{
	float *pt;
	pt=*(pointer+n);    //pt��ֵ��&score[k][0] 
	return pt;
}
