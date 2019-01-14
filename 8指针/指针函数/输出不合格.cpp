#include<stdio.h>   //返回指针值的函数 
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};   //定义数组，存放成绩 
	float *search(float(*pointer)[4]);                 //函数声明 
	float *p;
	int i,j;
	for(i=0;i<3;i++)
	{
		p=search(score+i);
		if(p==*(score+1))
		{
			printf("No.%d score",i);
			for(j=0;j<4;j++)
			  printf("%5.2f",*(p+j));
			printf("\n");
		}
	return 0;
	}
}

float *search(float(*pointer)[4])   
{
	int i=0;
	float *pt;
	pt=NULL;
	for(;i<4;i++)
	  if(*(*pointer+1)<60) pt=*pointer;   
	return pt;
}
