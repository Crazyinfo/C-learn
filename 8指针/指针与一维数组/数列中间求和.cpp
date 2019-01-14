#include<stdio.h>
int sum(int *p,int n)
{
	int i=0,s=0;
	for(i=0;i<n;i++,p++)
	  s+=*p;
	return s;
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int *q,m,n;
	scanf("%d %d",&m,&n);
	q=a+m-1;
	printf("%d",sum(q,n-m+1));//Лђеп printf("%d",sum(&a[m-1],n-m+1));
	return 0;
}
