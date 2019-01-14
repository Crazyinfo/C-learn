//选择排序法：每轮循环过程中，都会找出这个最值元素，下一轮排序时就不再考虑这个元素。 
#include<stdio.h>
int main()
{
	int i,j,t,k;
	int a[6]={8,1,3,4,2,5};
	for(i=0;i<6;i++)
	{
		k=i;
		for(j=i+1;j<6;j++)
			{
				if(a[k]>a[j]) k=j;
			}
   		if(k!=i)
    	{
			t=a[i];a[i]=a[k];a[k]=t;
		}
	}
	for(j=0;j<6;j++)
		printf("%d ",a[j]);
	printf("\n");
	return 0;
} 
