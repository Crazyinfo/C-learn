#include<stdio.h>
float Max,Min; 
float average(float array[],int n)
{
	int i;
	float aver,sum=array[0];
	Max=Min=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>Max)
		  Max=array[i];
		else if(array[i]<Min)
		  Min=array[i];
		sum=array[i]+sum;
	}
	aver=sum/n;
	return aver;
 } 
int main()
{
	float aver,score[10];
	int i;
	printf("请输入十个数字:\n");
	for(i=0;i<10;i++)
	    scanf("%f",&score[i]);
	aver=average(score,10);
	printf("Max=%6.2f\nMin=%6.2f\naverage=%6.2f\n",Max,Min,aver);
	return 0;
}
