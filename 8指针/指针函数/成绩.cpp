#include<stdio.h>   //返回指针值的函数 
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};   //定义数组，存放成绩 
	float *search(float(*pointer)[4],int n);                 //函数声明 
	float *p;
	int i,k;
	printf("enter the number of stduent:");
	scanf("%d",&k);              //输入要找学生的序号 
	printf("The scores of No.%d are:\n");
	p=search(score,k);                   //调用search函数，返回score[k][0]的地址 
	for(i=0;i<4;i++)
	  printf("%5.2f\t",*(p+i));
	printf("\n");
	return 0;
}

float *search(float(*pointer)[4],int n)   
{
	float *pt;
	pt=*(pointer+n);    //pt的值是&score[k][0] 
	return pt;
}
