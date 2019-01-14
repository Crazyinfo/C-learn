#include<stdio.h>
int main()
{
	int i,j,t;
	int a[6]={8,1,3,4,2,5};
	for(i=1;i<6;i++)
	{t=a[i];
	for(j=i-1;j>=0&&t>a[j];j--)
	a[j+1]=a[j];
	a[j+1]=t;
	}
	for(j=0;j<6;j++)
    printf("%d ",a[j]);
    
	printf("\n");
    return 0;
}
