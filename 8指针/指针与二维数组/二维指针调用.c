#include<stdio.h>
int main()
{
	void average(float *p,int n);
	void search(float (*p)[4],int n);
	float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
	average(*score,12);
	search(score,2);
	return 0;
}
void average(float *p,int n)
{
	float *m;
	float sum=0,aver;
	m=p+n-1;
	for(;p<=m;p++){
		sum=sum+(*p);
	}
	aver=sum/n;
	printf("平均值为%f\n",aver);
}
void search(float (*p)[4],int n)
{
	int i;
	printf("The score of No.%d are:\n",n);
	for(i=0;i<4;i++)
	  printf("%f ",*(*(p+n)+i));
}
